#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)59;
unsigned long long int var_11 = 5600191183463178965ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 927824553U;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 5691375485033202300LL;
unsigned long long int var_20 = 1620544341348299663ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3725017140U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
