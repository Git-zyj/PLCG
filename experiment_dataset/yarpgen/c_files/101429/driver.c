#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1809508709;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)186;
unsigned int var_10 = 3253459755U;
int zero = 0;
unsigned int var_14 = 2673925943U;
unsigned long long int var_15 = 17464083314115840799ULL;
long long int var_16 = 7955806548550797102LL;
unsigned int var_17 = 3043753182U;
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
