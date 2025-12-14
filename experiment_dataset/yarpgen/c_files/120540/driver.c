#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4068685106977756192ULL;
int var_6 = -475647823;
unsigned long long int var_13 = 12595233260844520190ULL;
int zero = 0;
unsigned long long int var_16 = 10902235441551886447ULL;
unsigned int var_17 = 649577338U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
