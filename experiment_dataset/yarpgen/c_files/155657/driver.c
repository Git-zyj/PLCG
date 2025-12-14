#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12651;
long long int var_8 = -3404434731324904952LL;
unsigned int var_13 = 345254150U;
unsigned long long int var_16 = 17783228600640859586ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3015523996U;
unsigned char var_22 = (unsigned char)50;
short var_23 = (short)-26488;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
