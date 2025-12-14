#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -210554475365039168LL;
int var_2 = -1010591581;
int var_4 = -1675900566;
unsigned long long int var_6 = 5686132656624986109ULL;
int var_7 = -387932268;
unsigned int var_8 = 3852026545U;
short var_9 = (short)-29743;
unsigned int var_10 = 3229134400U;
unsigned short var_12 = (unsigned short)6946;
int zero = 0;
int var_13 = 1265093536;
unsigned long long int var_14 = 9544341633651282786ULL;
signed char var_15 = (signed char)86;
void init() {
}

void checksum() {
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
