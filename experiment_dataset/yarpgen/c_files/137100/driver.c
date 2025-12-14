#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -893620734;
unsigned char var_3 = (unsigned char)34;
unsigned char var_4 = (unsigned char)18;
_Bool var_5 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7441761869798569523ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)42;
unsigned int var_19 = 3348647308U;
short var_20 = (short)-30536;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
