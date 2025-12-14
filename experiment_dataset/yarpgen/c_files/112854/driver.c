#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-20;
unsigned char var_3 = (unsigned char)57;
unsigned int var_6 = 3554164528U;
unsigned short var_7 = (unsigned short)12278;
signed char var_8 = (signed char)57;
short var_10 = (short)-11324;
signed char var_11 = (signed char)-41;
int zero = 0;
signed char var_12 = (signed char)-34;
int var_13 = -693605396;
unsigned short var_14 = (unsigned short)4223;
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
