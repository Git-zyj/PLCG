#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29706;
unsigned short var_3 = (unsigned short)17830;
unsigned long long int var_4 = 12347707327541875646ULL;
short var_6 = (short)-30216;
int zero = 0;
short var_11 = (short)-1431;
unsigned long long int var_12 = 3979632786022261654ULL;
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
