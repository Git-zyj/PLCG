#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59831;
int var_3 = 1172368782;
int var_4 = 2067596715;
unsigned long long int var_5 = 5825472425771489980ULL;
short var_6 = (short)-27756;
unsigned int var_10 = 1618818622U;
int var_12 = 1226067329;
int zero = 0;
unsigned long long int var_14 = 8978115120545772183ULL;
int var_15 = -1291859209;
void init() {
}

void checksum() {
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
