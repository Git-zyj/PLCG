#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 447511676447812470ULL;
unsigned char var_4 = (unsigned char)225;
unsigned int var_10 = 3339956673U;
int zero = 0;
unsigned int var_12 = 760481307U;
int var_13 = 1606429137;
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
