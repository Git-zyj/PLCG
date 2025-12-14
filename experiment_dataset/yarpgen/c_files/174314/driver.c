#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1489494026;
signed char var_12 = (signed char)-14;
int var_14 = -1375564336;
int zero = 0;
unsigned char var_16 = (unsigned char)140;
unsigned long long int var_17 = 10263154757369432587ULL;
long long int var_18 = -6795258767506983863LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
