#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6524838116171207221ULL;
short var_8 = (short)17394;
short var_10 = (short)-2758;
_Bool var_12 = (_Bool)0;
int var_14 = -1071914456;
short var_16 = (short)7213;
unsigned char var_18 = (unsigned char)164;
int zero = 0;
unsigned short var_19 = (unsigned short)21944;
int var_20 = -1582489192;
void init() {
}

void checksum() {
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
