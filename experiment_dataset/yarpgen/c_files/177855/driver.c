#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1002;
long long int var_1 = -4962276505613911275LL;
unsigned short var_8 = (unsigned short)38644;
unsigned int var_9 = 1820391624U;
int zero = 0;
int var_10 = 1103835212;
unsigned short var_11 = (unsigned short)25106;
short var_12 = (short)8757;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
