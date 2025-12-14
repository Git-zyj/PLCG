#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -517422734;
long long int var_2 = 7517991123944287825LL;
int var_3 = -1159275877;
unsigned char var_4 = (unsigned char)196;
unsigned long long int var_5 = 16039383994099491767ULL;
unsigned long long int var_6 = 6583376837429868864ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)90;
int var_9 = 823727855;
short var_10 = (short)-11984;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)146;
int zero = 0;
int var_14 = -1192872175;
unsigned short var_15 = (unsigned short)15536;
unsigned char var_16 = (unsigned char)227;
unsigned char var_17 = (unsigned char)249;
short var_18 = (short)-23702;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
