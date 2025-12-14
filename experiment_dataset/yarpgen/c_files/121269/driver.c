#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
short var_13 = (short)-32487;
unsigned int var_16 = 2368123911U;
int zero = 0;
unsigned long long int var_18 = 13335990729357876904ULL;
unsigned char var_19 = (unsigned char)122;
unsigned int var_20 = 2695179630U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
