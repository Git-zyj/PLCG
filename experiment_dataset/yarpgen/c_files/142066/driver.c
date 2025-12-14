#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_14 = 14280141480070983159ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)217;
unsigned short var_19 = (unsigned short)55549;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
