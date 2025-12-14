#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_7 = (short)3022;
int var_10 = 437983202;
int zero = 0;
signed char var_12 = (signed char)-80;
short var_13 = (short)14140;
unsigned long long int var_14 = 15745809170142519307ULL;
signed char var_15 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
