#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 6098005044889931280LL;
unsigned long long int var_10 = 4515457922003795997ULL;
unsigned long long int var_12 = 4953561909479337113ULL;
int var_13 = -1324503306;
unsigned short var_14 = (unsigned short)4506;
int zero = 0;
int var_16 = -551647510;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14940621041551459413ULL;
unsigned short var_19 = (unsigned short)42961;
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
