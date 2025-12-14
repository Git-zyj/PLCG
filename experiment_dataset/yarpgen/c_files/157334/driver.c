#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
int var_2 = 550555694;
signed char var_5 = (signed char)95;
unsigned int var_6 = 1733850331U;
int var_7 = 1558442489;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 2101546552;
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
