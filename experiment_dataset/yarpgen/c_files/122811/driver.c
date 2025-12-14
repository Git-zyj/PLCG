#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)36;
signed char var_5 = (signed char)21;
int var_11 = -813966403;
unsigned char var_14 = (unsigned char)68;
int zero = 0;
unsigned int var_19 = 3091246226U;
unsigned char var_20 = (unsigned char)21;
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
