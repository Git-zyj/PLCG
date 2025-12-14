#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 766976978U;
unsigned int var_1 = 3617538714U;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)50;
unsigned short var_8 = (unsigned short)18442;
int zero = 0;
unsigned long long int var_10 = 12691305694852174744ULL;
unsigned char var_11 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
