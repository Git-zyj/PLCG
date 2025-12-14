#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -504313731;
long long int var_2 = -5908182406456619752LL;
unsigned char var_8 = (unsigned char)229;
int var_10 = 877855321;
long long int var_15 = -8836909904456574516LL;
unsigned int var_17 = 3956234420U;
int zero = 0;
int var_18 = -1888939522;
short var_19 = (short)-27390;
void init() {
}

void checksum() {
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
