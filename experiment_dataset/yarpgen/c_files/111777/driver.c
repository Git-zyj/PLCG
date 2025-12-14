#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned long long int var_1 = 11688248397241004205ULL;
long long int var_8 = -1672089349010863427LL;
unsigned long long int var_11 = 7132118030788595357ULL;
int zero = 0;
short var_12 = (short)12047;
unsigned long long int var_13 = 10263474005970443817ULL;
unsigned char var_14 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
