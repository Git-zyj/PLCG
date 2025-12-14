#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1684813118U;
unsigned long long int var_6 = 4892524066031373836ULL;
unsigned char var_16 = (unsigned char)19;
int zero = 0;
unsigned short var_17 = (unsigned short)5665;
unsigned long long int var_18 = 2693525154175343667ULL;
void init() {
}

void checksum() {
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
