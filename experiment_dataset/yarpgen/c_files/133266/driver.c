#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2275422302U;
unsigned short var_6 = (unsigned short)59376;
unsigned short var_12 = (unsigned short)31971;
unsigned long long int var_14 = 2464883870747664420ULL;
int zero = 0;
signed char var_19 = (signed char)115;
unsigned long long int var_20 = 12209150623147595695ULL;
int var_21 = -737280024;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
