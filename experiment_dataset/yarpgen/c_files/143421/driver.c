#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58572;
short var_6 = (short)15710;
unsigned short var_11 = (unsigned short)51429;
unsigned short var_12 = (unsigned short)62680;
signed char var_16 = (signed char)-88;
int var_17 = -1312705776;
unsigned int var_18 = 1983781342U;
int zero = 0;
unsigned int var_19 = 3439986451U;
short var_20 = (short)-12624;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
