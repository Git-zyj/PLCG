#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22599;
signed char var_1 = (signed char)-127;
int var_2 = -13870255;
unsigned long long int var_7 = 5303450941493925601ULL;
int var_10 = -2341947;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
short var_13 = (short)28839;
void init() {
}

void checksum() {
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
