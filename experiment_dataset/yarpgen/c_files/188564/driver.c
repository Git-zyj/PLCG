#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -97656615959727390LL;
int var_2 = -1855681663;
long long int var_9 = -4656882564861849897LL;
unsigned long long int var_11 = 9368567043592141881ULL;
unsigned long long int var_12 = 6349023902271653811ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)83;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1378097292U;
unsigned char var_17 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
