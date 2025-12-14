#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27931;
signed char var_3 = (signed char)126;
unsigned int var_8 = 1254193999U;
int zero = 0;
int var_10 = 1283260185;
unsigned int var_11 = 1480949088U;
unsigned long long int var_12 = 13910622232176986847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
