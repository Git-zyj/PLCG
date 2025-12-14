#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2819;
int var_5 = 796102807;
unsigned long long int var_8 = 7061600415901857698ULL;
signed char var_9 = (signed char)95;
int zero = 0;
unsigned short var_11 = (unsigned short)51377;
signed char var_12 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
