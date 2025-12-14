#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1115669876;
long long int var_10 = 1570787106565968436LL;
unsigned long long int var_14 = 16305660712909518570ULL;
int zero = 0;
unsigned int var_15 = 3816537110U;
signed char var_16 = (signed char)122;
unsigned int var_17 = 2030672730U;
int var_18 = -798514193;
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
