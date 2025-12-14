#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 554054705U;
unsigned short var_4 = (unsigned short)28146;
unsigned int var_7 = 3295285047U;
int zero = 0;
unsigned int var_11 = 4058453880U;
long long int var_12 = -7982611065175166503LL;
unsigned short var_13 = (unsigned short)47380;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
