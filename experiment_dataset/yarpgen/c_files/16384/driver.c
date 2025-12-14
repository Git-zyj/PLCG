#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4071832642U;
unsigned short var_4 = (unsigned short)33672;
unsigned long long int var_5 = 15512898396536395661ULL;
unsigned short var_10 = (unsigned short)24083;
int zero = 0;
unsigned char var_11 = (unsigned char)150;
long long int var_12 = 5663775060219191872LL;
unsigned int var_13 = 3933839635U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
