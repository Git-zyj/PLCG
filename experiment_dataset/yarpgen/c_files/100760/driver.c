#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3316818427U;
unsigned long long int var_1 = 12158498294213951888ULL;
unsigned char var_2 = (unsigned char)111;
unsigned int var_4 = 415830302U;
unsigned char var_7 = (unsigned char)188;
unsigned int var_8 = 1639690289U;
int zero = 0;
unsigned long long int var_10 = 2693383022690205116ULL;
signed char var_11 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
