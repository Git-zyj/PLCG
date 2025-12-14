#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7081197068938703587ULL;
unsigned short var_10 = (unsigned short)1352;
short var_12 = (short)-31392;
unsigned int var_15 = 1883030783U;
int zero = 0;
signed char var_17 = (signed char)-29;
short var_18 = (short)-20211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
