#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1846861480;
signed char var_10 = (signed char)-16;
unsigned int var_16 = 425714919U;
int zero = 0;
unsigned char var_19 = (unsigned char)254;
unsigned short var_20 = (unsigned short)37370;
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
