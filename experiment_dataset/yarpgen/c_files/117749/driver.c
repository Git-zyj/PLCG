#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3806976719351790483LL;
unsigned long long int var_11 = 12337898690642305637ULL;
long long int var_12 = 4945227092097713190LL;
unsigned int var_14 = 721685767U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 3942041771U;
unsigned char var_21 = (unsigned char)254;
short var_22 = (short)7935;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
