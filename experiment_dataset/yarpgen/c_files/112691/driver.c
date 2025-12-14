#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned char var_3 = (unsigned char)9;
unsigned short var_5 = (unsigned short)45203;
unsigned long long int var_6 = 1555234030060097482ULL;
unsigned int var_8 = 259857928U;
int zero = 0;
int var_11 = 1308276640;
long long int var_12 = -8278568126932813633LL;
unsigned long long int var_13 = 1299726177579992973ULL;
int var_14 = -370739162;
unsigned char var_15 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
