#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 930619407;
short var_2 = (short)-4856;
short var_4 = (short)31606;
int var_5 = 927058903;
signed char var_6 = (signed char)63;
unsigned int var_7 = 1325394268U;
unsigned int var_9 = 1867740619U;
int zero = 0;
unsigned int var_10 = 3318311843U;
unsigned char var_11 = (unsigned char)120;
unsigned char var_12 = (unsigned char)76;
short var_13 = (short)-26897;
short var_14 = (short)-20667;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
