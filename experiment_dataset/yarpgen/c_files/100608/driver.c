#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49840;
unsigned long long int var_4 = 12826727339253636967ULL;
unsigned long long int var_5 = 14570312914703027144ULL;
int zero = 0;
unsigned long long int var_10 = 10412499204228473310ULL;
short var_11 = (short)16774;
unsigned short var_12 = (unsigned short)17873;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
