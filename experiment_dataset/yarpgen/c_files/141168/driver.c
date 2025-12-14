#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1437061097274680197ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)231;
short var_5 = (short)-9741;
short var_12 = (short)16954;
int zero = 0;
unsigned char var_18 = (unsigned char)53;
short var_19 = (short)18891;
int var_20 = 799287338;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
