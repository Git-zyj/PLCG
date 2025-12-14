#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)75;
unsigned char var_7 = (unsigned char)167;
unsigned char var_9 = (unsigned char)83;
int var_10 = -1600577199;
int zero = 0;
unsigned short var_11 = (unsigned short)12632;
unsigned char var_12 = (unsigned char)242;
unsigned char var_13 = (unsigned char)245;
int var_14 = 813380054;
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
