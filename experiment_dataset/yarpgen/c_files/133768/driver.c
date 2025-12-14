#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1653455234;
unsigned int var_13 = 611890175U;
unsigned long long int var_15 = 6530795719357213529ULL;
int zero = 0;
int var_18 = 1320342335;
unsigned char var_19 = (unsigned char)208;
unsigned int var_20 = 839273486U;
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
