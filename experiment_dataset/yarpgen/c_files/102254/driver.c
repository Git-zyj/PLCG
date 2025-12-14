#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -468786370;
int var_2 = -149514884;
short var_3 = (short)-1055;
short var_5 = (short)-20455;
unsigned long long int var_7 = 11950793464548744466ULL;
int var_9 = -1328453295;
unsigned long long int var_12 = 1820847853593400902ULL;
int zero = 0;
int var_13 = 402558478;
unsigned long long int var_14 = 1325930687050229771ULL;
unsigned short var_15 = (unsigned short)39523;
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
