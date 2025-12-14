#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)24;
unsigned long long int var_7 = 16048275031667071840ULL;
int zero = 0;
unsigned long long int var_13 = 7848611882447827042ULL;
int var_14 = 552924760;
unsigned long long int var_15 = 15090948641529324712ULL;
short var_16 = (short)2018;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
