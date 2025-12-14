#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 858798971;
unsigned int var_2 = 1951082826U;
unsigned short var_3 = (unsigned short)61897;
unsigned short var_8 = (unsigned short)18877;
int zero = 0;
unsigned short var_16 = (unsigned short)23015;
unsigned long long int var_17 = 13182736357494027956ULL;
unsigned long long int var_18 = 10115366217080051724ULL;
void init() {
}

void checksum() {
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
