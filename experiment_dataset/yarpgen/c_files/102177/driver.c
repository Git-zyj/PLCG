#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6451086896246971751LL;
unsigned char var_6 = (unsigned char)24;
unsigned char var_10 = (unsigned char)72;
unsigned char var_13 = (unsigned char)187;
unsigned long long int var_14 = 18094154373408496646ULL;
int zero = 0;
unsigned int var_15 = 4191322541U;
int var_16 = 564511305;
void init() {
}

void checksum() {
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
