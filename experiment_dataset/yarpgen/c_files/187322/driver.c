#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
int var_7 = -635077291;
signed char var_9 = (signed char)110;
int zero = 0;
unsigned int var_14 = 332977216U;
unsigned long long int var_15 = 6939617739673147641ULL;
unsigned short var_16 = (unsigned short)3214;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
