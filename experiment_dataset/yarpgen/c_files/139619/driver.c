#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)29789;
unsigned short var_16 = (unsigned short)24888;
int zero = 0;
unsigned short var_18 = (unsigned short)54906;
unsigned short var_19 = (unsigned short)605;
unsigned short var_20 = (unsigned short)24404;
unsigned short var_21 = (unsigned short)51551;
void init() {
}

void checksum() {
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
