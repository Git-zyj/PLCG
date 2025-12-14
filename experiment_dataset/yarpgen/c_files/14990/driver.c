#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 402798388722649876ULL;
unsigned char var_5 = (unsigned char)17;
int var_7 = -1543737254;
signed char var_8 = (signed char)49;
unsigned int var_9 = 2024817701U;
int zero = 0;
short var_11 = (short)-7787;
signed char var_12 = (signed char)-48;
long long int var_13 = -6560744286393122810LL;
unsigned int var_14 = 1197514513U;
void init() {
}

void checksum() {
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
