#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1061906502U;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 3298813392U;
_Bool var_12 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-24688;
unsigned short var_20 = (unsigned short)7278;
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
