#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1346042020;
unsigned long long int var_6 = 15617010174129220223ULL;
unsigned char var_11 = (unsigned char)181;
unsigned char var_14 = (unsigned char)19;
int var_15 = -1539821410;
int zero = 0;
long long int var_19 = 5735032164602484564LL;
unsigned int var_20 = 1751386759U;
int var_21 = -798719431;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
