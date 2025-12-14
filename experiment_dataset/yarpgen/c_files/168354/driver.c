#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
signed char var_3 = (signed char)106;
signed char var_4 = (signed char)-18;
int var_6 = 735081757;
unsigned short var_8 = (unsigned short)15548;
unsigned char var_12 = (unsigned char)67;
int zero = 0;
unsigned short var_13 = (unsigned short)46448;
signed char var_14 = (signed char)-50;
int var_15 = 1644535486;
unsigned char var_16 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
