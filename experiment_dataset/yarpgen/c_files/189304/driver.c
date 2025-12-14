#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48589;
int var_3 = 1884008657;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 190215880046472608ULL;
unsigned long long int var_9 = 8587275336050059178ULL;
_Bool var_11 = (_Bool)1;
long long int var_14 = 1949681502905405436LL;
unsigned char var_15 = (unsigned char)50;
int var_16 = 1679240652;
int zero = 0;
unsigned char var_17 = (unsigned char)170;
unsigned char var_18 = (unsigned char)22;
void init() {
}

void checksum() {
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
