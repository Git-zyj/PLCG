#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)148;
short var_5 = (short)10442;
unsigned long long int var_7 = 2419441767348800121ULL;
unsigned long long int var_10 = 10607875451678313180ULL;
int zero = 0;
long long int var_12 = 6584274487682206227LL;
unsigned long long int var_13 = 18389606752146220279ULL;
unsigned long long int var_14 = 15512124090996931546ULL;
long long int var_15 = -2991656080774097939LL;
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
