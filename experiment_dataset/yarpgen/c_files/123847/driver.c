#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1746046430U;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)-33;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-22085;
long long int var_13 = -4742052401809233170LL;
unsigned long long int var_14 = 10887719006765989049ULL;
unsigned int var_15 = 3066714369U;
unsigned char var_16 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
