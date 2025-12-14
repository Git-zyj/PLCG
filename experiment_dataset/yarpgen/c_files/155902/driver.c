#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24048;
unsigned short var_13 = (unsigned short)22527;
int zero = 0;
unsigned short var_20 = (unsigned short)39524;
unsigned short var_21 = (unsigned short)24151;
unsigned short var_22 = (unsigned short)2996;
unsigned short var_23 = (unsigned short)38844;
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
