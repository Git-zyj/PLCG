#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1613024901U;
signed char var_11 = (signed char)-122;
int var_12 = 1307325521;
int var_13 = 2144633852;
int zero = 0;
signed char var_15 = (signed char)50;
int var_16 = 697932546;
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
