#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
signed char var_1 = (signed char)41;
signed char var_2 = (signed char)-67;
short var_3 = (short)-21360;
unsigned short var_4 = (unsigned short)32626;
signed char var_5 = (signed char)-57;
short var_6 = (short)-10996;
signed char var_8 = (signed char)36;
unsigned char var_9 = (unsigned char)175;
unsigned char var_10 = (unsigned char)39;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
int var_12 = -1177481298;
unsigned short var_13 = (unsigned short)59435;
signed char var_14 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
