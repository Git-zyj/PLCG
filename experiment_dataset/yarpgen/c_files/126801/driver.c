#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17749;
signed char var_3 = (signed char)-10;
int var_5 = 1073238174;
unsigned short var_8 = (unsigned short)21200;
unsigned long long int var_9 = 4972028517485079818ULL;
unsigned long long int var_11 = 5665616597826152100ULL;
int zero = 0;
short var_14 = (short)-12730;
unsigned char var_15 = (unsigned char)186;
unsigned char var_16 = (unsigned char)4;
int var_17 = 592340655;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
