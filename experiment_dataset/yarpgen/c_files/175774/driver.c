#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)44829;
unsigned short var_8 = (unsigned short)58749;
unsigned long long int var_9 = 16705379236052310738ULL;
int zero = 0;
long long int var_10 = 5160028638261233720LL;
unsigned long long int var_11 = 8248262361327969905ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
