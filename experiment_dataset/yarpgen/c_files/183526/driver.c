#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6198067459300001223ULL;
signed char var_2 = (signed char)121;
unsigned int var_3 = 3247587198U;
int zero = 0;
unsigned int var_12 = 3481424057U;
short var_13 = (short)23142;
unsigned short var_14 = (unsigned short)28124;
unsigned int var_15 = 1598712523U;
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
