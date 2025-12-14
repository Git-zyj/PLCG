#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1254955927;
int var_1 = 553096529;
unsigned short var_2 = (unsigned short)18841;
int var_3 = 1134780276;
unsigned int var_5 = 2855762122U;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-92;
unsigned char var_10 = (unsigned char)41;
unsigned short var_14 = (unsigned short)30363;
int zero = 0;
unsigned char var_15 = (unsigned char)192;
signed char var_16 = (signed char)-67;
short var_17 = (short)21216;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
