#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -784856139;
unsigned int var_10 = 4083459041U;
unsigned int var_12 = 2516582688U;
int zero = 0;
unsigned char var_19 = (unsigned char)23;
signed char var_20 = (signed char)105;
void init() {
}

void checksum() {
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
