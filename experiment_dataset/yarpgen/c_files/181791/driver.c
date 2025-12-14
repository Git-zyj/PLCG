#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2063717631;
signed char var_4 = (signed char)113;
int var_7 = 752992497;
unsigned short var_14 = (unsigned short)60264;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
int var_20 = 1773904335;
signed char var_21 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
