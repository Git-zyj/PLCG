#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23899;
signed char var_8 = (signed char)-92;
int var_9 = -296679919;
unsigned short var_11 = (unsigned short)11751;
long long int var_14 = 7949679298473320418LL;
int zero = 0;
unsigned int var_17 = 3558513264U;
unsigned short var_18 = (unsigned short)55982;
unsigned char var_19 = (unsigned char)3;
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
