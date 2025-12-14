#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27483;
unsigned int var_7 = 2153159511U;
unsigned char var_9 = (unsigned char)40;
int zero = 0;
unsigned int var_16 = 3400687221U;
unsigned char var_17 = (unsigned char)207;
long long int var_18 = -2023312036811844262LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
