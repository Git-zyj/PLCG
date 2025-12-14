#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 911586493U;
unsigned int var_9 = 569830692U;
unsigned long long int var_10 = 8137386210491180820ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 3031857179464756325ULL;
int var_13 = -1262539647;
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
