#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13428529277439466901ULL;
unsigned long long int var_5 = 517559939543594967ULL;
unsigned long long int var_6 = 6817879566412429509ULL;
unsigned long long int var_8 = 16833843292990580267ULL;
unsigned long long int var_13 = 8972088476534738408ULL;
int zero = 0;
unsigned long long int var_14 = 4468844064152158132ULL;
unsigned long long int var_15 = 15149374891997556856ULL;
void init() {
}

void checksum() {
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
