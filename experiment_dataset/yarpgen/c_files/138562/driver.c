#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)19044;
unsigned short var_8 = (unsigned short)537;
unsigned short var_9 = (unsigned short)62043;
unsigned short var_11 = (unsigned short)41473;
unsigned short var_12 = (unsigned short)20380;
unsigned short var_15 = (unsigned short)51743;
int zero = 0;
unsigned short var_18 = (unsigned short)63583;
unsigned short var_19 = (unsigned short)44713;
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
