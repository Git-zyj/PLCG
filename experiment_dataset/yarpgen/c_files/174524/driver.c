#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned long long int var_5 = 13281140339832977846ULL;
unsigned long long int var_8 = 10037712128123883091ULL;
unsigned short var_9 = (unsigned short)47674;
unsigned long long int var_14 = 4376699333903241857ULL;
unsigned long long int var_16 = 15133859044110927574ULL;
unsigned short var_18 = (unsigned short)706;
int zero = 0;
unsigned short var_20 = (unsigned short)28019;
unsigned long long int var_21 = 16859647591919857283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
