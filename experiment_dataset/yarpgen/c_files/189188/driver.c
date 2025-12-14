#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)46133;
short var_8 = (short)-18929;
signed char var_10 = (signed char)113;
int var_11 = 1387371695;
signed char var_13 = (signed char)103;
int zero = 0;
int var_16 = 840822008;
signed char var_17 = (signed char)93;
unsigned char var_18 = (unsigned char)145;
long long int var_19 = 7119402613473602189LL;
unsigned short var_20 = (unsigned short)17754;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
