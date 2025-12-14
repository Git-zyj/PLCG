#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)159;
long long int var_6 = 7638539004343869955LL;
unsigned short var_7 = (unsigned short)7802;
unsigned char var_9 = (unsigned char)7;
signed char var_13 = (signed char)56;
unsigned char var_14 = (unsigned char)213;
int var_15 = -1126492349;
int zero = 0;
signed char var_19 = (signed char)-41;
unsigned char var_20 = (unsigned char)33;
short var_21 = (short)-30296;
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
