#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3403232469U;
unsigned int var_9 = 2669192284U;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
unsigned short var_14 = (unsigned short)6950;
int var_15 = -941719309;
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
