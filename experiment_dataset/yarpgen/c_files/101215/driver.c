#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5973240203797473698ULL;
int var_1 = 1614367232;
unsigned char var_2 = (unsigned char)65;
signed char var_6 = (signed char)54;
unsigned char var_7 = (unsigned char)37;
unsigned short var_9 = (unsigned short)24377;
int zero = 0;
long long int var_14 = -1506661980829046641LL;
int var_15 = -89783138;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
