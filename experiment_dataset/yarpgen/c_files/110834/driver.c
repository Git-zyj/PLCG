#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1356866251U;
int var_7 = 1541094176;
unsigned long long int var_8 = 3853931326946145004ULL;
unsigned int var_9 = 949958181U;
int var_12 = 137240974;
int zero = 0;
unsigned short var_19 = (unsigned short)13175;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)2657;
void init() {
}

void checksum() {
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
