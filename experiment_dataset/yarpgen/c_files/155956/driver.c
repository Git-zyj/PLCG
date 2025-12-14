#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3760025513328930047ULL;
unsigned long long int var_5 = 13735040688905702290ULL;
unsigned int var_6 = 4148241524U;
unsigned short var_9 = (unsigned short)3073;
int var_10 = 1550434940;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)54768;
int zero = 0;
unsigned short var_13 = (unsigned short)5971;
unsigned int var_14 = 3781970829U;
void init() {
}

void checksum() {
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
