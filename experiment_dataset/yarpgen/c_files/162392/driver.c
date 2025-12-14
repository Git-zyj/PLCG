#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned char var_1 = (unsigned char)132;
signed char var_5 = (signed char)-55;
unsigned short var_7 = (unsigned short)12206;
signed char var_8 = (signed char)1;
signed char var_11 = (signed char)120;
signed char var_12 = (signed char)-111;
int zero = 0;
unsigned short var_15 = (unsigned short)59096;
unsigned short var_16 = (unsigned short)1167;
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
