#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
unsigned long long int var_12 = 14241807104165420226ULL;
signed char var_18 = (signed char)-127;
int zero = 0;
unsigned int var_19 = 2712543514U;
unsigned char var_20 = (unsigned char)198;
signed char var_21 = (signed char)52;
unsigned int var_22 = 2976156447U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
