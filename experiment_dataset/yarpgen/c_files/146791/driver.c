#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)223;
unsigned char var_12 = (unsigned char)206;
int zero = 0;
unsigned short var_15 = (unsigned short)40957;
unsigned long long int var_16 = 11458683001643676906ULL;
unsigned short var_17 = (unsigned short)55839;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
