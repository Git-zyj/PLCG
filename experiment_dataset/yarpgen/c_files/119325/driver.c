#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3721141773364891634LL;
int var_4 = -1648646387;
int var_6 = 335727131;
int var_7 = -1044613043;
unsigned short var_9 = (unsigned short)59008;
unsigned long long int var_13 = 14209083100304983332ULL;
int zero = 0;
short var_14 = (short)3995;
int var_15 = -467355111;
void init() {
}

void checksum() {
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
