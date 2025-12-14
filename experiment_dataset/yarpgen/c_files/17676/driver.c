#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1217688597U;
unsigned char var_9 = (unsigned char)199;
_Bool var_11 = (_Bool)1;
long long int var_14 = 1273344860359576914LL;
int zero = 0;
unsigned char var_19 = (unsigned char)251;
long long int var_20 = -8018251920002465548LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
