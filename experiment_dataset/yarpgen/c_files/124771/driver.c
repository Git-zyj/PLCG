#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2164202604U;
signed char var_3 = (signed char)45;
unsigned short var_7 = (unsigned short)63435;
unsigned short var_14 = (unsigned short)44060;
int zero = 0;
unsigned short var_17 = (unsigned short)8781;
signed char var_18 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
