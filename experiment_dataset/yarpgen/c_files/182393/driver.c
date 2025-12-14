#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 85910493;
long long int var_3 = -5036145198213209642LL;
signed char var_4 = (signed char)8;
long long int var_5 = -2765252258185567020LL;
short var_6 = (short)-27762;
int var_9 = 1938465231;
int zero = 0;
int var_11 = -1486299505;
short var_12 = (short)-21796;
long long int var_13 = 3597846558949626001LL;
long long int var_14 = -3336357343566817603LL;
void init() {
}

void checksum() {
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
