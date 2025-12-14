#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1839423872606657881LL;
short var_4 = (short)24416;
int var_6 = 345166946;
int zero = 0;
int var_16 = 1137107401;
unsigned long long int var_17 = 8980874957104255918ULL;
unsigned short var_18 = (unsigned short)51850;
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
