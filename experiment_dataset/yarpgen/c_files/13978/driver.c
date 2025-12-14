#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)106;
unsigned char var_7 = (unsigned char)17;
unsigned long long int var_10 = 2380468711713482246ULL;
int zero = 0;
unsigned long long int var_16 = 11022856268142405122ULL;
unsigned long long int var_17 = 3984599125814039981ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
