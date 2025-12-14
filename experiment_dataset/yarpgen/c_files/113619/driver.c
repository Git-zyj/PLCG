#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
long long int var_2 = 4820425526423844860LL;
long long int var_3 = 3146404420829877566LL;
long long int var_4 = 1965081829658906075LL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 467771862U;
unsigned char var_11 = (unsigned char)81;
int zero = 0;
unsigned char var_12 = (unsigned char)227;
unsigned int var_13 = 1507243696U;
unsigned char var_14 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
