#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5342876456752513639ULL;
unsigned short var_3 = (unsigned short)12696;
unsigned long long int var_4 = 15696747761269044734ULL;
unsigned char var_5 = (unsigned char)55;
unsigned char var_8 = (unsigned char)214;
int zero = 0;
long long int var_10 = -1668639339317060810LL;
short var_11 = (short)-6544;
unsigned short var_12 = (unsigned short)64119;
signed char var_13 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
