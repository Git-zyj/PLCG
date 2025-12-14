#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 145743494U;
unsigned long long int var_6 = 16973027908613131616ULL;
unsigned int var_9 = 1183356789U;
int zero = 0;
unsigned char var_18 = (unsigned char)177;
int var_19 = -826076324;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
