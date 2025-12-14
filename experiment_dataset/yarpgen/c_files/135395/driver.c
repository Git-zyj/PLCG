#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6703279572096144165ULL;
unsigned long long int var_5 = 5228684928577078985ULL;
unsigned int var_6 = 3661703154U;
unsigned long long int var_9 = 12479567332153678608ULL;
int zero = 0;
int var_11 = -1242854217;
int var_12 = -527402981;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
