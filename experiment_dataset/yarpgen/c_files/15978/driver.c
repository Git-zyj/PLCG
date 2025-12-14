#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
unsigned long long int var_4 = 9117265759987487722ULL;
unsigned int var_6 = 935986494U;
int zero = 0;
signed char var_15 = (signed char)-10;
int var_16 = -705506468;
unsigned long long int var_17 = 16053495021548956887ULL;
signed char var_18 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
