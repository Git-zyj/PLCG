#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23251;
unsigned int var_2 = 999009418U;
unsigned char var_4 = (unsigned char)71;
int var_6 = -620820018;
int var_9 = -12542979;
int zero = 0;
long long int var_12 = -7825077109010658050LL;
int var_13 = -426826073;
unsigned int var_14 = 39951982U;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
