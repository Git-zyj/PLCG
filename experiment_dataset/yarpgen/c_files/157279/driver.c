#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 796457950;
short var_9 = (short)-20587;
long long int var_10 = 7848939312397245657LL;
unsigned short var_15 = (unsigned short)50968;
int var_16 = -200872712;
int zero = 0;
unsigned int var_18 = 2150742872U;
unsigned short var_19 = (unsigned short)13249;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
