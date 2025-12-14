#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13613;
unsigned long long int var_1 = 17972598380206063374ULL;
unsigned short var_2 = (unsigned short)55299;
short var_3 = (short)9328;
unsigned short var_5 = (unsigned short)18317;
unsigned char var_6 = (unsigned char)48;
int zero = 0;
unsigned char var_10 = (unsigned char)240;
short var_11 = (short)5786;
unsigned long long int var_12 = 13578243851529576987ULL;
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
