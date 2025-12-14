#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51160;
unsigned short var_2 = (unsigned short)41065;
unsigned short var_4 = (unsigned short)64503;
unsigned short var_5 = (unsigned short)46750;
unsigned short var_7 = (unsigned short)39197;
unsigned short var_9 = (unsigned short)32764;
unsigned short var_11 = (unsigned short)1959;
short var_12 = (short)19402;
unsigned short var_13 = (unsigned short)30467;
int zero = 0;
unsigned short var_15 = (unsigned short)31940;
short var_16 = (short)7884;
unsigned short var_17 = (unsigned short)39719;
unsigned long long int var_18 = 7267652473282054470ULL;
unsigned short var_19 = (unsigned short)42085;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
