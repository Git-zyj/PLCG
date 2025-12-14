#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10698191921400331886ULL;
long long int var_2 = -1844625310312146465LL;
unsigned long long int var_3 = 7063416864331492217ULL;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -5372049322265696417LL;
int var_14 = -1600813961;
int zero = 0;
short var_19 = (short)-13059;
long long int var_20 = 2401190382869480935LL;
short var_21 = (short)-23680;
long long int var_22 = 2166022167186247685LL;
_Bool var_23 = (_Bool)0;
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
