#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -794278698;
unsigned short var_2 = (unsigned short)42261;
unsigned short var_4 = (unsigned short)22046;
int var_5 = 1814640343;
unsigned int var_6 = 2231628310U;
unsigned short var_7 = (unsigned short)40686;
int var_8 = 256084818;
int var_13 = 906988206;
unsigned short var_15 = (unsigned short)29534;
int zero = 0;
unsigned short var_17 = (unsigned short)32679;
unsigned short var_18 = (unsigned short)42230;
unsigned short var_19 = (unsigned short)58720;
unsigned short var_20 = (unsigned short)58316;
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
