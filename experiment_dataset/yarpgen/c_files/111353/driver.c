#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
signed char var_1 = (signed char)-80;
unsigned int var_3 = 3442806277U;
signed char var_6 = (signed char)33;
unsigned int var_7 = 3467341245U;
unsigned char var_11 = (unsigned char)132;
short var_12 = (short)-28395;
short var_14 = (short)-22792;
unsigned int var_17 = 3161208474U;
int zero = 0;
signed char var_18 = (signed char)-27;
short var_19 = (short)-22244;
long long int var_20 = 4913690253562545124LL;
unsigned char var_21 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
