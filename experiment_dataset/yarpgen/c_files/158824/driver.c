#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)59918;
unsigned int var_12 = 3237989465U;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
unsigned char var_21 = (unsigned char)2;
unsigned short var_22 = (unsigned short)19756;
unsigned int var_23 = 3940408884U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
