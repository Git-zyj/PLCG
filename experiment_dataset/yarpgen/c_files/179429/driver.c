#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24424;
signed char var_1 = (signed char)19;
unsigned short var_2 = (unsigned short)17387;
long long int var_3 = -6937197485527806103LL;
unsigned int var_8 = 3550578478U;
int zero = 0;
unsigned int var_11 = 2716666697U;
unsigned char var_12 = (unsigned char)55;
long long int var_13 = -2046498755415570036LL;
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
