#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-6653;
unsigned int var_9 = 665958169U;
unsigned char var_16 = (unsigned char)141;
int zero = 0;
unsigned long long int var_19 = 8589681798811891085ULL;
signed char var_20 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
