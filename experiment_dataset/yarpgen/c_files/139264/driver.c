#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
unsigned long long int var_8 = 2962240078029697651ULL;
short var_18 = (short)-28334;
int zero = 0;
unsigned short var_19 = (unsigned short)28828;
short var_20 = (short)-19725;
short var_21 = (short)-7038;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
