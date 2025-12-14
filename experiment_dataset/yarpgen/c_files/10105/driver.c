#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2678310076U;
unsigned short var_4 = (unsigned short)19064;
unsigned long long int var_11 = 16784832932837305534ULL;
int zero = 0;
short var_12 = (short)-9534;
short var_13 = (short)2081;
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
