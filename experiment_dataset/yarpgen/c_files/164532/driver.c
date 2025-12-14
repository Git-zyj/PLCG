#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3078127882U;
unsigned char var_4 = (unsigned char)81;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)10;
int zero = 0;
unsigned long long int var_13 = 10921010583990309839ULL;
int var_14 = 454570802;
void init() {
}

void checksum() {
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
