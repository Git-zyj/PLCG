#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1443923301;
long long int var_2 = 4617845809614211923LL;
_Bool var_4 = (_Bool)1;
int var_6 = 2132726922;
_Bool var_10 = (_Bool)1;
long long int var_12 = 2904516960192616075LL;
int zero = 0;
short var_14 = (short)19566;
long long int var_15 = 592840588112957554LL;
unsigned short var_16 = (unsigned short)35774;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
