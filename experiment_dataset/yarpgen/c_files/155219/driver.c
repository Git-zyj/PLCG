#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17189598710613242491ULL;
unsigned long long int var_3 = 2551977231714017803ULL;
unsigned long long int var_5 = 6684933742073603142ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)60367;
unsigned long long int var_16 = 13958025883707857371ULL;
void init() {
}

void checksum() {
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
