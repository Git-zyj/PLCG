#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
long long int var_1 = 4861662058793070602LL;
int var_2 = -1730855704;
unsigned long long int var_3 = 752726528514272080ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 7127980743573764106ULL;
unsigned int var_11 = 4145753539U;
int zero = 0;
unsigned int var_14 = 2222513597U;
unsigned char var_15 = (unsigned char)39;
int var_16 = 1951322520;
unsigned short var_17 = (unsigned short)56631;
void init() {
}

void checksum() {
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
