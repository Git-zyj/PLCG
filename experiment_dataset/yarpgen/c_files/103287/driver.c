#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11403841967974417452ULL;
unsigned long long int var_3 = 7580311102108028462ULL;
short var_10 = (short)23018;
int zero = 0;
unsigned int var_12 = 1492092392U;
unsigned int var_13 = 3745627468U;
void init() {
}

void checksum() {
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
