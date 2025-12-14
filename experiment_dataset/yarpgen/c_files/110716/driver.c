#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)2797;
short var_15 = (short)14615;
unsigned long long int var_16 = 1294511690809281092ULL;
int zero = 0;
unsigned long long int var_17 = 5884459524661814552ULL;
unsigned char var_18 = (unsigned char)67;
unsigned long long int var_19 = 11455881476170816940ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
