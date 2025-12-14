#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10850;
unsigned int var_3 = 3701141887U;
unsigned long long int var_4 = 14458722481131108582ULL;
long long int var_5 = -3487932197785448105LL;
short var_6 = (short)-12488;
unsigned long long int var_16 = 8730228983559855554ULL;
long long int var_17 = -3111786962581683657LL;
int zero = 0;
long long int var_18 = -4249536804835472508LL;
signed char var_19 = (signed char)35;
signed char var_20 = (signed char)-28;
unsigned short var_21 = (unsigned short)26941;
long long int var_22 = 171480452499776663LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
