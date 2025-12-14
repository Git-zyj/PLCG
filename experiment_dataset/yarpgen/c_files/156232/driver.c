#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54313;
unsigned short var_1 = (unsigned short)30960;
unsigned int var_13 = 3849058870U;
int zero = 0;
signed char var_19 = (signed char)-21;
unsigned short var_20 = (unsigned short)65427;
unsigned int var_21 = 1077558512U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
