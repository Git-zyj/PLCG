#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-29;
int var_6 = -46867782;
unsigned short var_9 = (unsigned short)47205;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
signed char var_20 = (signed char)99;
signed char var_21 = (signed char)-41;
void init() {
}

void checksum() {
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
