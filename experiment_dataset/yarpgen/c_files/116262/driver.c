#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17780;
unsigned int var_4 = 3810495920U;
unsigned long long int var_7 = 2865736399929387789ULL;
int zero = 0;
short var_19 = (short)11770;
unsigned char var_20 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
