#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1206598780;
unsigned char var_2 = (unsigned char)64;
unsigned int var_3 = 3937448034U;
unsigned int var_10 = 1530449126U;
int zero = 0;
int var_20 = -1331421624;
unsigned char var_21 = (unsigned char)26;
signed char var_22 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
