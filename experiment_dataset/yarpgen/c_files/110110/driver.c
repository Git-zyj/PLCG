#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5257;
short var_5 = (short)3052;
long long int var_9 = 3752958125206837609LL;
short var_14 = (short)7515;
long long int var_15 = -6827640742758502747LL;
int zero = 0;
short var_16 = (short)-15729;
long long int var_17 = -3225529807941779392LL;
unsigned long long int var_18 = 15243334410464137964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
