#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
signed char var_3 = (signed char)50;
unsigned short var_4 = (unsigned short)46008;
unsigned long long int var_5 = 8698098047945843293ULL;
short var_6 = (short)-20063;
signed char var_8 = (signed char)29;
short var_11 = (short)29779;
int zero = 0;
short var_12 = (short)-13069;
signed char var_13 = (signed char)-62;
short var_14 = (short)-4523;
void init() {
}

void checksum() {
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
