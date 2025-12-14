#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)32;
unsigned long long int var_4 = 904969013039141974ULL;
int zero = 0;
long long int var_14 = 2049239051594184988LL;
unsigned long long int var_15 = 5645404530376227386ULL;
unsigned short var_16 = (unsigned short)14293;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
