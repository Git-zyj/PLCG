#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1773400043166963217LL;
signed char var_5 = (signed char)-1;
unsigned char var_10 = (unsigned char)35;
int zero = 0;
int var_12 = -1084158236;
long long int var_13 = -6282264411794004562LL;
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
