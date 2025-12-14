#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 936595399U;
unsigned short var_10 = (unsigned short)10356;
short var_12 = (short)-16293;
unsigned long long int var_13 = 992103145861821984ULL;
unsigned char var_15 = (unsigned char)94;
int zero = 0;
unsigned long long int var_17 = 17375276707389355986ULL;
short var_18 = (short)-29744;
unsigned char var_19 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
