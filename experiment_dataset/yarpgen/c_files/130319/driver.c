#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17710;
short var_4 = (short)-20833;
unsigned char var_6 = (unsigned char)97;
short var_8 = (short)-25287;
signed char var_13 = (signed char)-82;
int zero = 0;
int var_15 = -1043882808;
signed char var_16 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
