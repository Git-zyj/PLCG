#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)230;
unsigned char var_6 = (unsigned char)18;
signed char var_7 = (signed char)73;
unsigned int var_13 = 2801856354U;
int zero = 0;
signed char var_17 = (signed char)105;
unsigned long long int var_18 = 11026783361047394577ULL;
void init() {
}

void checksum() {
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
