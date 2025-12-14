#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 387574898520754085LL;
int var_2 = -1407707158;
unsigned int var_3 = 277106172U;
signed char var_4 = (signed char)63;
long long int var_5 = 965208094684078223LL;
unsigned long long int var_7 = 3654666549933079361ULL;
long long int var_8 = -8652796912429136389LL;
long long int var_9 = 6584198970724792305LL;
unsigned long long int var_14 = 391465207618646778ULL;
unsigned int var_16 = 2548579820U;
int zero = 0;
unsigned short var_19 = (unsigned short)8110;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11260631140165589107ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
