#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)4261;
long long int var_5 = 619517433891191986LL;
short var_8 = (short)30104;
int var_9 = -1667819605;
unsigned char var_10 = (unsigned char)161;
short var_11 = (short)28169;
unsigned short var_14 = (unsigned short)48704;
short var_15 = (short)24650;
int zero = 0;
long long int var_16 = 7930653035179372307LL;
unsigned short var_17 = (unsigned short)26052;
unsigned short var_18 = (unsigned short)16608;
int var_19 = 1336169540;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
