#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)176;
signed char var_7 = (signed char)50;
unsigned char var_9 = (unsigned char)30;
int zero = 0;
unsigned long long int var_11 = 15062208288606660550ULL;
unsigned char var_12 = (unsigned char)44;
unsigned long long int var_13 = 56512025062228834ULL;
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
