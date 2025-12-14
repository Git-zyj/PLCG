#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 454590503;
int var_5 = 50751985;
_Bool var_7 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1820153531U;
unsigned short var_20 = (unsigned short)2469;
unsigned int var_21 = 471781160U;
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
