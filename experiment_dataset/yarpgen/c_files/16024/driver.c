#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -307179868;
signed char var_3 = (signed char)-39;
short var_5 = (short)-2020;
int var_7 = 958408134;
int var_9 = 466447405;
unsigned short var_12 = (unsigned short)64810;
unsigned short var_13 = (unsigned short)29828;
unsigned int var_16 = 2894393544U;
int zero = 0;
signed char var_20 = (signed char)-56;
short var_21 = (short)16688;
signed char var_22 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
