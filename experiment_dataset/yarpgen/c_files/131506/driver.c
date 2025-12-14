#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24789;
unsigned short var_2 = (unsigned short)33612;
unsigned short var_6 = (unsigned short)64937;
unsigned short var_13 = (unsigned short)1686;
int zero = 0;
unsigned short var_17 = (unsigned short)46756;
unsigned short var_18 = (unsigned short)61988;
unsigned short var_19 = (unsigned short)3547;
unsigned short var_20 = (unsigned short)49596;
unsigned short var_21 = (unsigned short)60457;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
