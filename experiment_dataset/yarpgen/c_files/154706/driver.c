#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5560683753696695850LL;
unsigned char var_1 = (unsigned char)3;
unsigned short var_2 = (unsigned short)10588;
long long int var_3 = -1425747094797769417LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-32072;
long long int var_6 = 7608407900407654440LL;
unsigned long long int var_7 = 8286204948772801967ULL;
signed char var_9 = (signed char)-127;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-1473;
long long int var_12 = -2024404166520905113LL;
int zero = 0;
short var_13 = (short)21052;
unsigned long long int var_14 = 639963223329293074ULL;
unsigned short var_15 = (unsigned short)56165;
unsigned char var_16 = (unsigned char)48;
long long int var_17 = -6077704526605230639LL;
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
