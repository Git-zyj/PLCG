#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)32477;
unsigned char var_3 = (unsigned char)93;
long long int var_4 = 9191979496098008755LL;
unsigned char var_8 = (unsigned char)190;
unsigned short var_10 = (unsigned short)32070;
long long int var_15 = 6400217473859249407LL;
unsigned long long int var_18 = 10849170144968899552ULL;
int zero = 0;
unsigned long long int var_19 = 11676321665958164416ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)60619;
unsigned short var_23 = (unsigned short)53721;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
