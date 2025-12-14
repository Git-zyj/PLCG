#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -458961003;
unsigned int var_2 = 1409987555U;
unsigned char var_4 = (unsigned char)150;
short var_5 = (short)-31223;
short var_6 = (short)25419;
unsigned int var_7 = 1414471650U;
short var_8 = (short)-4318;
unsigned char var_10 = (unsigned char)57;
int zero = 0;
unsigned char var_11 = (unsigned char)159;
int var_12 = 639507272;
unsigned long long int var_13 = 17876868135682309771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
