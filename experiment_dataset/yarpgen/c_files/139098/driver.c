#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29873;
unsigned int var_1 = 3133002911U;
_Bool var_2 = (_Bool)0;
short var_5 = (short)25937;
long long int var_6 = 2750836959205804743LL;
unsigned char var_7 = (unsigned char)1;
unsigned int var_9 = 1982022707U;
int zero = 0;
unsigned long long int var_11 = 15873576267880561406ULL;
unsigned short var_12 = (unsigned short)33554;
long long int var_13 = 5535475835772977688LL;
unsigned char var_14 = (unsigned char)80;
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
