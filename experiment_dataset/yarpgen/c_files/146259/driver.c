#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 284470946U;
unsigned short var_3 = (unsigned short)40674;
short var_6 = (short)-13466;
unsigned int var_7 = 1259397098U;
signed char var_8 = (signed char)-65;
signed char var_9 = (signed char)-126;
int zero = 0;
unsigned short var_13 = (unsigned short)43545;
unsigned long long int var_14 = 5584246733991189941ULL;
unsigned int var_15 = 3383092428U;
void init() {
}

void checksum() {
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
