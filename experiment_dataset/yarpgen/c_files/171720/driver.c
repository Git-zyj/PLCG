#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)41613;
unsigned short var_18 = (unsigned short)20785;
int zero = 0;
unsigned short var_20 = (unsigned short)44033;
unsigned short var_21 = (unsigned short)57056;
unsigned short var_22 = (unsigned short)37142;
unsigned short var_23 = (unsigned short)30990;
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
