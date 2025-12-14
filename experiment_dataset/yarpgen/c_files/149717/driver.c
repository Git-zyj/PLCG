#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)6;
short var_3 = (short)-3480;
short var_4 = (short)3162;
unsigned short var_5 = (unsigned short)11788;
unsigned int var_6 = 3140415940U;
unsigned short var_7 = (unsigned short)46300;
unsigned short var_8 = (unsigned short)31332;
unsigned int var_10 = 3717495351U;
unsigned short var_12 = (unsigned short)54175;
int zero = 0;
unsigned int var_14 = 2433521255U;
signed char var_15 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
