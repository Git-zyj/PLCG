#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 143383360;
unsigned char var_6 = (unsigned char)2;
long long int var_11 = -5840672281558176029LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 4242799204U;
long long int var_20 = -4954565887534993160LL;
short var_21 = (short)452;
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
