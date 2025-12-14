#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 2195677164397139457ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7342414333446321013LL;
unsigned char var_21 = (unsigned char)62;
unsigned int var_22 = 1478520616U;
_Bool var_23 = (_Bool)1;
long long int var_24 = -6097268548462213184LL;
unsigned short var_25 = (unsigned short)28785;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
