#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17576347808909349410ULL;
unsigned int var_5 = 739423877U;
short var_6 = (short)16586;
unsigned char var_7 = (unsigned char)234;
signed char var_9 = (signed char)37;
int zero = 0;
unsigned int var_11 = 3690881701U;
unsigned short var_12 = (unsigned short)54708;
signed char var_13 = (signed char)122;
unsigned short var_14 = (unsigned short)5136;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
