#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2118529580;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 894705972U;
int zero = 0;
signed char var_14 = (signed char)-53;
unsigned long long int var_15 = 3403861069436582728ULL;
short var_16 = (short)17045;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
