#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30902;
unsigned short var_3 = (unsigned short)52794;
unsigned short var_4 = (unsigned short)34404;
unsigned short var_9 = (unsigned short)21861;
signed char var_11 = (signed char)-116;
unsigned short var_12 = (unsigned short)10559;
unsigned short var_15 = (unsigned short)53896;
int zero = 0;
signed char var_19 = (signed char)16;
unsigned short var_20 = (unsigned short)17130;
unsigned short var_21 = (unsigned short)47438;
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
