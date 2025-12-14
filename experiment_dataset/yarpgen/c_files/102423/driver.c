#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13702;
signed char var_6 = (signed char)-90;
int var_7 = -1193184038;
unsigned long long int var_14 = 5757663218133260609ULL;
int zero = 0;
unsigned long long int var_15 = 8543338562398212219ULL;
unsigned long long int var_16 = 7101421272781495903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
