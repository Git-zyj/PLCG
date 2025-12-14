#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13696;
long long int var_3 = -3994755978470081875LL;
unsigned int var_11 = 2810831616U;
unsigned int var_16 = 3000628113U;
unsigned long long int var_17 = 5763308540344790837ULL;
int zero = 0;
int var_20 = 1933951056;
long long int var_21 = -2676298017415886074LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
