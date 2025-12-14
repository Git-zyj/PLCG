#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30307;
unsigned long long int var_5 = 2557288063761533861ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 8176550904190911491ULL;
int var_12 = -1620663312;
int zero = 0;
int var_13 = -1916256322;
int var_14 = -1489463030;
unsigned int var_15 = 4398033U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
