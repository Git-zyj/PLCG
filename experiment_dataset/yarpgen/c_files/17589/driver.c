#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1645740346;
unsigned int var_4 = 105486508U;
unsigned int var_7 = 1365101596U;
unsigned short var_9 = (unsigned short)40642;
int var_10 = -2006867741;
short var_12 = (short)-24997;
int zero = 0;
signed char var_13 = (signed char)82;
unsigned short var_14 = (unsigned short)40076;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
