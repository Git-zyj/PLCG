#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -756000531;
unsigned int var_4 = 315311779U;
unsigned char var_5 = (unsigned char)64;
unsigned short var_6 = (unsigned short)64996;
int zero = 0;
unsigned short var_10 = (unsigned short)28224;
unsigned short var_11 = (unsigned short)16290;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
