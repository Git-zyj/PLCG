#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25694;
unsigned char var_3 = (unsigned char)30;
signed char var_7 = (signed char)-10;
int var_10 = 195306940;
int zero = 0;
signed char var_14 = (signed char)-41;
unsigned int var_15 = 487712467U;
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
