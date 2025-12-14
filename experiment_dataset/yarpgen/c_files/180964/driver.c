#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-16;
unsigned int var_10 = 3352422747U;
unsigned int var_16 = 1177912148U;
int zero = 0;
unsigned long long int var_19 = 9320038129015598063ULL;
signed char var_20 = (signed char)-12;
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
