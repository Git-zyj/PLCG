#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1384410343;
unsigned char var_10 = (unsigned char)191;
int var_13 = -902522451;
unsigned short var_16 = (unsigned short)61489;
int zero = 0;
unsigned short var_18 = (unsigned short)62437;
short var_19 = (short)-32388;
unsigned char var_20 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
