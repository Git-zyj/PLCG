#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 18376531762250406727ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 1627766311U;
int zero = 0;
short var_20 = (short)4006;
unsigned short var_21 = (unsigned short)40010;
void init() {
}

void checksum() {
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
