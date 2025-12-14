#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)781;
unsigned char var_8 = (unsigned char)107;
unsigned short var_10 = (unsigned short)36787;
unsigned int var_13 = 2998972706U;
short var_14 = (short)-25370;
int zero = 0;
unsigned char var_18 = (unsigned char)175;
signed char var_19 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
