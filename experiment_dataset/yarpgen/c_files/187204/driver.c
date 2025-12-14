#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6652;
signed char var_1 = (signed char)-49;
unsigned int var_6 = 9951837U;
long long int var_8 = 394529991056111711LL;
long long int var_12 = -6774394869044127427LL;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
unsigned int var_18 = 1781281353U;
short var_19 = (short)-30600;
signed char var_20 = (signed char)108;
unsigned long long int var_21 = 7585632263327166284ULL;
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
