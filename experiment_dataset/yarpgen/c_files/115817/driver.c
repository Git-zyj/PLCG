#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 715867745;
signed char var_5 = (signed char)34;
short var_6 = (short)17532;
unsigned char var_13 = (unsigned char)90;
int var_14 = 1289078645;
int var_16 = -1683556921;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
long long int var_19 = -7762874539406961131LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)57;
unsigned short var_22 = (unsigned short)20030;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
