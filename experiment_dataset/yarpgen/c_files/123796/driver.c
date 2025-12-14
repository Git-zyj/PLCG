#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2375058497U;
unsigned int var_4 = 3801597638U;
unsigned char var_8 = (unsigned char)199;
signed char var_10 = (signed char)109;
int zero = 0;
signed char var_11 = (signed char)56;
unsigned short var_12 = (unsigned short)39907;
unsigned char var_13 = (unsigned char)174;
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
