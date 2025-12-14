#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)138;
unsigned short var_10 = (unsigned short)2663;
int var_11 = -220528023;
signed char var_13 = (signed char)22;
int zero = 0;
int var_17 = -687864174;
short var_18 = (short)-277;
signed char var_19 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
