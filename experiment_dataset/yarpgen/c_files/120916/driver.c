#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2396110257U;
signed char var_6 = (signed char)-45;
unsigned int var_7 = 2754979587U;
unsigned int var_11 = 3539562651U;
int zero = 0;
unsigned int var_12 = 2135219885U;
unsigned int var_13 = 368149268U;
signed char var_14 = (signed char)-72;
void init() {
}

void checksum() {
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
