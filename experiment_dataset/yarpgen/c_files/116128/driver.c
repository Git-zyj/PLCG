#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)31402;
unsigned char var_4 = (unsigned char)118;
unsigned long long int var_6 = 3631476119392575971ULL;
long long int var_7 = 3405001704517640126LL;
short var_8 = (short)23351;
short var_9 = (short)-13989;
unsigned int var_10 = 628619020U;
unsigned int var_12 = 2690795376U;
unsigned int var_16 = 2243321523U;
long long int var_17 = 1972727473569691551LL;
int zero = 0;
unsigned short var_18 = (unsigned short)35227;
short var_19 = (short)-14531;
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
