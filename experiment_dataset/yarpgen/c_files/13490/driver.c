#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-46;
unsigned char var_4 = (unsigned char)70;
unsigned char var_5 = (unsigned char)16;
unsigned int var_6 = 2526212856U;
short var_13 = (short)-9726;
int zero = 0;
signed char var_14 = (signed char)114;
int var_15 = -792103538;
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
