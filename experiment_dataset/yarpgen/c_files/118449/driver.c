#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)32520;
unsigned short var_9 = (unsigned short)3921;
unsigned short var_10 = (unsigned short)8161;
unsigned short var_11 = (unsigned short)34354;
unsigned short var_13 = (unsigned short)19550;
unsigned short var_16 = (unsigned short)39346;
int zero = 0;
unsigned short var_19 = (unsigned short)59291;
unsigned short var_20 = (unsigned short)14819;
void init() {
}

void checksum() {
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
