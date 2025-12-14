#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5837339178860835329ULL;
int var_2 = 316664998;
unsigned short var_4 = (unsigned short)39400;
unsigned long long int var_6 = 9443493704573948826ULL;
unsigned short var_7 = (unsigned short)65308;
unsigned long long int var_10 = 1641793653763455768ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 1086458730U;
unsigned char var_13 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
