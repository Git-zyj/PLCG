#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)24;
unsigned char var_8 = (unsigned char)157;
int var_9 = 314504748;
unsigned char var_13 = (unsigned char)81;
int zero = 0;
int var_17 = -1283089497;
int var_18 = -87252759;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
