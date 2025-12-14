#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)79;
int var_10 = -203096802;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)25804;
signed char var_17 = (signed char)-114;
int zero = 0;
short var_18 = (short)6638;
int var_19 = -995456821;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
