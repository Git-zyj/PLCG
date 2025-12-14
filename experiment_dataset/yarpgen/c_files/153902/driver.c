#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63453;
int var_3 = -2100910488;
short var_8 = (short)-20538;
unsigned short var_9 = (unsigned short)35951;
int var_15 = 1797777784;
long long int var_16 = 7022638946713371104LL;
unsigned short var_17 = (unsigned short)42846;
int zero = 0;
short var_18 = (short)-25405;
unsigned short var_19 = (unsigned short)20349;
void init() {
}

void checksum() {
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
