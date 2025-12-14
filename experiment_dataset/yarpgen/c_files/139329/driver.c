#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3368;
short var_4 = (short)26623;
unsigned long long int var_8 = 14265011404526068753ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)18414;
unsigned long long int var_11 = 1872351905328281107ULL;
long long int var_12 = -585132961427255512LL;
int var_13 = -1326290836;
unsigned int var_14 = 1242413206U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
