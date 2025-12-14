#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3090081328U;
short var_8 = (short)4956;
signed char var_9 = (signed char)-81;
unsigned char var_10 = (unsigned char)49;
int zero = 0;
signed char var_14 = (signed char)-65;
unsigned char var_15 = (unsigned char)40;
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
