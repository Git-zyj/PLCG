#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64725;
short var_4 = (short)32131;
signed char var_8 = (signed char)-86;
int zero = 0;
unsigned char var_16 = (unsigned char)27;
signed char var_17 = (signed char)-57;
short var_18 = (short)-27051;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
