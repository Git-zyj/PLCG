#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 204743422U;
short var_2 = (short)27740;
unsigned int var_3 = 2859071527U;
short var_4 = (short)-24867;
short var_5 = (short)-8307;
signed char var_9 = (signed char)53;
unsigned int var_10 = 4202697645U;
int zero = 0;
unsigned char var_11 = (unsigned char)46;
unsigned char var_12 = (unsigned char)159;
unsigned int var_13 = 2940213832U;
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
