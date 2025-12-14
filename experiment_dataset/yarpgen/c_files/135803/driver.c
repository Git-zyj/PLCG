#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -922379944;
unsigned int var_3 = 2513517411U;
short var_5 = (short)27323;
unsigned int var_6 = 1846666058U;
short var_7 = (short)25334;
unsigned long long int var_10 = 5232553845676316251ULL;
unsigned long long int var_11 = 5171734519584404145ULL;
unsigned char var_12 = (unsigned char)83;
int zero = 0;
short var_13 = (short)6594;
long long int var_14 = 7919390190922438792LL;
unsigned char var_15 = (unsigned char)229;
short var_16 = (short)-18448;
unsigned long long int var_17 = 7137624360999028894ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
