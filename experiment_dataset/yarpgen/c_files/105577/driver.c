#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6511514229383418912LL;
unsigned long long int var_1 = 11898263996436017385ULL;
long long int var_2 = -5928848117964827544LL;
unsigned int var_3 = 2934944665U;
unsigned int var_4 = 2208332387U;
int var_11 = -685990155;
int zero = 0;
unsigned long long int var_12 = 17218334703840046093ULL;
unsigned long long int var_13 = 15427261968776783516ULL;
unsigned int var_14 = 2053899721U;
void init() {
}

void checksum() {
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
