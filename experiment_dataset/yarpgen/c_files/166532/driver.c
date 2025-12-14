#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49248;
unsigned long long int var_4 = 7556097998773342577ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
unsigned long long int var_11 = 13545157489903949639ULL;
unsigned char var_12 = (unsigned char)122;
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
