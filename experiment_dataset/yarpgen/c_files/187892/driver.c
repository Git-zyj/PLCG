#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
unsigned short var_4 = (unsigned short)25361;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7648207739061178085ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)36576;
short var_18 = (short)19219;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
