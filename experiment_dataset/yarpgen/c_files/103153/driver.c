#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2010036687U;
unsigned short var_5 = (unsigned short)47320;
signed char var_7 = (signed char)-83;
signed char var_8 = (signed char)38;
unsigned int var_9 = 9362879U;
int zero = 0;
unsigned long long int var_13 = 740826553150539921ULL;
unsigned short var_14 = (unsigned short)44852;
short var_15 = (short)23897;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
