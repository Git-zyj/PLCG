#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)22448;
unsigned int var_9 = 4198292888U;
long long int var_10 = -2583969364554952092LL;
unsigned char var_11 = (unsigned char)162;
int var_12 = -317349627;
int zero = 0;
unsigned short var_14 = (unsigned short)64646;
signed char var_15 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
