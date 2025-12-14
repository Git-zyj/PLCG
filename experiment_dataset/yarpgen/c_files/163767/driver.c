#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31179;
unsigned char var_5 = (unsigned char)174;
unsigned long long int var_6 = 12170879404699161690ULL;
unsigned long long int var_8 = 17061595629441948463ULL;
unsigned long long int var_10 = 6020008800814855824ULL;
unsigned long long int var_16 = 12296456582630252403ULL;
short var_17 = (short)-30998;
int var_18 = 828105815;
signed char var_19 = (signed char)5;
int zero = 0;
unsigned long long int var_20 = 11848588354771595466ULL;
unsigned int var_21 = 2909827681U;
unsigned long long int var_22 = 11178097181397435576ULL;
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
