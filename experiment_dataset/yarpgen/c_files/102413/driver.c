#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9354;
unsigned char var_4 = (unsigned char)24;
unsigned int var_5 = 1674461231U;
signed char var_7 = (signed char)56;
unsigned int var_8 = 3931355454U;
int zero = 0;
signed char var_10 = (signed char)-121;
unsigned short var_11 = (unsigned short)29095;
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
