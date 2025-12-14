#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7201242865334208860LL;
int var_6 = -130031490;
unsigned long long int var_8 = 4358467519531482532ULL;
unsigned char var_13 = (unsigned char)254;
int var_14 = 1714079991;
int zero = 0;
unsigned int var_16 = 1155149753U;
unsigned long long int var_17 = 14094050309934632428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
