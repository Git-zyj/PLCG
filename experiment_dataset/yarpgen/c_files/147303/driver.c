#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned char var_2 = (unsigned char)206;
short var_7 = (short)-5970;
unsigned char var_8 = (unsigned char)121;
signed char var_12 = (signed char)45;
signed char var_13 = (signed char)52;
int zero = 0;
unsigned char var_14 = (unsigned char)43;
unsigned char var_15 = (unsigned char)156;
short var_16 = (short)-25046;
void init() {
}

void checksum() {
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
