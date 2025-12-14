#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)86;
int var_4 = 2059875268;
signed char var_7 = (signed char)-92;
unsigned char var_10 = (unsigned char)10;
unsigned char var_12 = (unsigned char)68;
int zero = 0;
unsigned short var_13 = (unsigned short)57206;
unsigned long long int var_14 = 14312101215381463589ULL;
unsigned char var_15 = (unsigned char)107;
unsigned char var_16 = (unsigned char)175;
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
