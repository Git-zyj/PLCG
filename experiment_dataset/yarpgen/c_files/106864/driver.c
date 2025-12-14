#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3964130857794646947ULL;
int var_2 = 674762200;
short var_3 = (short)2985;
unsigned short var_7 = (unsigned short)47859;
short var_9 = (short)-32024;
unsigned char var_10 = (unsigned char)156;
signed char var_11 = (signed char)-6;
int zero = 0;
unsigned short var_13 = (unsigned short)10643;
short var_14 = (short)23646;
unsigned short var_15 = (unsigned short)39839;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
