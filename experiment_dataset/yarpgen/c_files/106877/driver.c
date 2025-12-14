#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1683054587;
unsigned int var_8 = 3594372250U;
unsigned int var_10 = 1564522792U;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
long long int var_16 = 2207416111321572578LL;
unsigned int var_17 = 421806061U;
unsigned long long int var_18 = 18184113229755599605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
