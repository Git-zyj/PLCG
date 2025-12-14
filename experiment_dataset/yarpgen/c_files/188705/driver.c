#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10177;
short var_3 = (short)5342;
short var_4 = (short)7121;
short var_6 = (short)-24219;
short var_9 = (short)-20930;
short var_11 = (short)8767;
int zero = 0;
short var_12 = (short)13845;
short var_13 = (short)-16021;
short var_14 = (short)-26150;
short var_15 = (short)-13258;
short var_16 = (short)-14717;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
