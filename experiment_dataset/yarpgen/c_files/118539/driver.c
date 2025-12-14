#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9039608907822893012ULL;
unsigned char var_1 = (unsigned char)138;
long long int var_2 = 2072334975081414420LL;
signed char var_3 = (signed char)69;
unsigned long long int var_4 = 13852757928085953252ULL;
short var_6 = (short)-32062;
unsigned int var_7 = 3358483264U;
unsigned short var_8 = (unsigned short)10632;
long long int var_10 = 1135786302682758554LL;
int var_11 = -1093451462;
long long int var_12 = -963988627019720775LL;
unsigned char var_13 = (unsigned char)248;
signed char var_14 = (signed char)18;
int zero = 0;
unsigned short var_15 = (unsigned short)20133;
int var_16 = 1819934950;
unsigned char var_17 = (unsigned char)193;
unsigned short var_18 = (unsigned short)26930;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
