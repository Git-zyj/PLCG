#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28904;
int var_5 = -1097117572;
int var_6 = -1506600581;
short var_10 = (short)-16151;
unsigned short var_15 = (unsigned short)7212;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_20 = 360518771;
signed char var_21 = (signed char)111;
unsigned short var_22 = (unsigned short)56686;
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
