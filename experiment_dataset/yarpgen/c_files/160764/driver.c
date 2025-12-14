#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 763627053U;
signed char var_6 = (signed char)-116;
unsigned char var_10 = (unsigned char)23;
int zero = 0;
unsigned int var_11 = 2620266436U;
short var_12 = (short)-10308;
int var_13 = 401115888;
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
