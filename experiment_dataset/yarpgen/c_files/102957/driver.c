#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1727529924;
short var_5 = (short)-23226;
int var_6 = 834968753;
short var_10 = (short)-3965;
signed char var_14 = (signed char)-38;
int var_15 = -1929857140;
int zero = 0;
int var_16 = 857442021;
short var_17 = (short)21135;
unsigned char var_18 = (unsigned char)42;
short var_19 = (short)-26465;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
