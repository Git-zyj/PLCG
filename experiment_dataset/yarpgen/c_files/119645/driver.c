#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -515895945;
short var_3 = (short)9054;
_Bool var_10 = (_Bool)1;
short var_11 = (short)6495;
int var_13 = -1202700537;
short var_14 = (short)17513;
unsigned char var_15 = (unsigned char)51;
unsigned short var_17 = (unsigned short)17055;
unsigned short var_19 = (unsigned short)26258;
int zero = 0;
short var_20 = (short)22645;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
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
