#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3144299716422982729LL;
short var_4 = (short)12005;
unsigned int var_7 = 2169207577U;
int zero = 0;
unsigned short var_11 = (unsigned short)59277;
unsigned int var_12 = 1674676073U;
unsigned short var_13 = (unsigned short)34928;
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
