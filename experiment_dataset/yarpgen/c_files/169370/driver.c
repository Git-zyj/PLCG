#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6964;
unsigned short var_1 = (unsigned short)13688;
unsigned short var_2 = (unsigned short)6673;
unsigned short var_5 = (unsigned short)39650;
unsigned short var_6 = (unsigned short)39562;
unsigned short var_8 = (unsigned short)51151;
unsigned short var_9 = (unsigned short)46043;
unsigned short var_10 = (unsigned short)50505;
unsigned short var_11 = (unsigned short)42696;
int zero = 0;
unsigned short var_12 = (unsigned short)24130;
unsigned short var_13 = (unsigned short)33099;
unsigned short var_14 = (unsigned short)6650;
void init() {
}

void checksum() {
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
