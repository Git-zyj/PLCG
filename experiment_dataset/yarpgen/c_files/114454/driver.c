#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
unsigned int var_1 = 1173232382U;
short var_3 = (short)21970;
short var_4 = (short)-4903;
int var_5 = 1685464941;
signed char var_6 = (signed char)-56;
signed char var_7 = (signed char)-67;
unsigned long long int var_8 = 4380487604886454484ULL;
signed char var_9 = (signed char)113;
short var_10 = (short)-17695;
int var_12 = 1385673417;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
unsigned char var_14 = (unsigned char)173;
short var_15 = (short)-31024;
short var_16 = (short)532;
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
