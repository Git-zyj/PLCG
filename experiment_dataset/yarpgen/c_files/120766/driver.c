#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21201;
unsigned long long int var_2 = 8893860982060987177ULL;
short var_5 = (short)8587;
long long int var_7 = 1833861073710168126LL;
signed char var_8 = (signed char)38;
int zero = 0;
int var_14 = 671399380;
int var_15 = 644268577;
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
