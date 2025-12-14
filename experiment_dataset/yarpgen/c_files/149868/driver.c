#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13715775109300434166ULL;
unsigned long long int var_4 = 8956236057136140658ULL;
short var_8 = (short)-31887;
unsigned char var_10 = (unsigned char)79;
unsigned short var_11 = (unsigned short)35435;
unsigned char var_13 = (unsigned char)61;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
