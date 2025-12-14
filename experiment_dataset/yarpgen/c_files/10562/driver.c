#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19320;
int var_2 = -1356214854;
int var_3 = 1701102750;
int var_4 = -923814813;
unsigned long long int var_5 = 10185347446414191746ULL;
unsigned char var_6 = (unsigned char)73;
int var_7 = 2095911645;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
unsigned long long int var_12 = 3861078942968442021ULL;
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
