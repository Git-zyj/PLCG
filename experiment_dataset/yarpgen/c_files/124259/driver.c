#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3833641775418333586ULL;
unsigned short var_10 = (unsigned short)14806;
int var_14 = -245091486;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
unsigned char var_18 = (unsigned char)147;
unsigned char var_19 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
