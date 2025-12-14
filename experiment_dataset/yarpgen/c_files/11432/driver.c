#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1119417101U;
unsigned int var_5 = 2951030842U;
int var_7 = -2147282765;
short var_9 = (short)-27685;
int zero = 0;
short var_10 = (short)18132;
unsigned int var_11 = 4084173786U;
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
