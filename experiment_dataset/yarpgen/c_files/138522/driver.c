#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4128060661U;
short var_2 = (short)-25821;
int var_4 = -352804072;
unsigned int var_7 = 1783712824U;
unsigned char var_13 = (unsigned char)57;
unsigned short var_14 = (unsigned short)33574;
int zero = 0;
unsigned char var_18 = (unsigned char)138;
signed char var_19 = (signed char)-67;
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
