#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1993962206;
int var_7 = 678010744;
unsigned int var_9 = 166279821U;
int zero = 0;
int var_10 = 1127129669;
unsigned short var_11 = (unsigned short)59059;
unsigned char var_12 = (unsigned char)174;
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
