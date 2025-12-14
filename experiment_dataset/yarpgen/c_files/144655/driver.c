#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64778;
unsigned short var_6 = (unsigned short)36119;
unsigned short var_19 = (unsigned short)1705;
int zero = 0;
unsigned short var_20 = (unsigned short)57644;
unsigned short var_21 = (unsigned short)30951;
unsigned short var_22 = (unsigned short)36851;
unsigned short var_23 = (unsigned short)36961;
unsigned short var_24 = (unsigned short)8606;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
