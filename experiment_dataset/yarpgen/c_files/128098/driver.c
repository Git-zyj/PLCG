#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -83995250;
unsigned char var_6 = (unsigned char)2;
int var_8 = -704422785;
signed char var_9 = (signed char)7;
short var_11 = (short)-5717;
signed char var_13 = (signed char)-44;
int var_14 = 2035237159;
unsigned int var_15 = 2241569427U;
int zero = 0;
unsigned int var_20 = 1970135332U;
signed char var_21 = (signed char)19;
unsigned int var_22 = 3982307610U;
short var_23 = (short)-30802;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
