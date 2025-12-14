#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)54;
unsigned int var_4 = 2574714041U;
unsigned int var_10 = 1881800392U;
int zero = 0;
long long int var_12 = 4786913633515635917LL;
unsigned short var_13 = (unsigned short)54700;
short var_14 = (short)11631;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
