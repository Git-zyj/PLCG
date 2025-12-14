#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned short var_3 = (unsigned short)54850;
unsigned short var_6 = (unsigned short)30115;
short var_8 = (short)2114;
int zero = 0;
long long int var_10 = 2205974058712811958LL;
int var_11 = 1212963210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
