#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2365;
unsigned long long int var_9 = 4316266712146957886ULL;
signed char var_12 = (signed char)87;
int zero = 0;
unsigned char var_13 = (unsigned char)237;
unsigned short var_14 = (unsigned short)49602;
void init() {
}

void checksum() {
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
