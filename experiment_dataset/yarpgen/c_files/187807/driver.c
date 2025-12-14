#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -896282481;
signed char var_4 = (signed char)15;
unsigned long long int var_7 = 12073671116229063511ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
unsigned char var_11 = (unsigned char)159;
int var_12 = -297379179;
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
