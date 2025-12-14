#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27971;
unsigned int var_4 = 1519821468U;
unsigned short var_5 = (unsigned short)30948;
unsigned short var_8 = (unsigned short)14847;
unsigned char var_11 = (unsigned char)231;
short var_12 = (short)12082;
unsigned int var_14 = 1903496482U;
signed char var_15 = (signed char)-108;
unsigned int var_17 = 487700604U;
int zero = 0;
int var_20 = 1699496352;
unsigned long long int var_21 = 6428745001335839749ULL;
long long int var_22 = -2547876759191602608LL;
unsigned long long int var_23 = 18012227962327949442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
