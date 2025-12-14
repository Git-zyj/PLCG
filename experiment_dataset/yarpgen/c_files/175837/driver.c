#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7807991160907464864LL;
unsigned int var_2 = 3067182346U;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_12 = -1911748042;
int zero = 0;
unsigned long long int var_14 = 12388448109829027476ULL;
unsigned long long int var_15 = 12732678359054824751ULL;
unsigned char var_16 = (unsigned char)30;
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
