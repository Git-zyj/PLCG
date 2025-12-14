#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
unsigned char var_2 = (unsigned char)154;
signed char var_4 = (signed char)66;
unsigned char var_5 = (unsigned char)145;
unsigned short var_6 = (unsigned short)55320;
unsigned short var_10 = (unsigned short)41223;
int var_14 = 57607802;
int var_17 = 1038622810;
int zero = 0;
unsigned char var_19 = (unsigned char)240;
unsigned char var_20 = (unsigned char)136;
short var_21 = (short)-2609;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
