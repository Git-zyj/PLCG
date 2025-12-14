#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20425;
unsigned short var_5 = (unsigned short)46501;
short var_6 = (short)-17309;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2468265258U;
unsigned long long int var_12 = 8128951389556459376ULL;
int zero = 0;
unsigned long long int var_15 = 6366757137004184519ULL;
short var_16 = (short)12888;
unsigned short var_17 = (unsigned short)57467;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
