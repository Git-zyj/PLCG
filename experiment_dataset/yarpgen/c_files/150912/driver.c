#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1321246888;
unsigned char var_1 = (unsigned char)84;
int var_2 = 1230470108;
signed char var_3 = (signed char)51;
signed char var_4 = (signed char)29;
signed char var_7 = (signed char)-57;
unsigned int var_8 = 1996242367U;
unsigned char var_10 = (unsigned char)32;
unsigned int var_11 = 359061569U;
unsigned int var_13 = 413516394U;
int zero = 0;
unsigned int var_14 = 723215542U;
unsigned int var_15 = 1149870863U;
_Bool var_16 = (_Bool)0;
int var_17 = -1150220572;
unsigned short var_18 = (unsigned short)32906;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
