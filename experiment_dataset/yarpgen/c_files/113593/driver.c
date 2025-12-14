#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1694596758U;
signed char var_5 = (signed char)-88;
int var_10 = 55570124;
int zero = 0;
unsigned int var_19 = 2641738808U;
unsigned char var_20 = (unsigned char)167;
int var_21 = 554004322;
unsigned char var_22 = (unsigned char)244;
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
