#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5443;
unsigned short var_1 = (unsigned short)5418;
unsigned int var_3 = 333901927U;
unsigned long long int var_6 = 1570766131963375783ULL;
short var_8 = (short)-18684;
unsigned char var_12 = (unsigned char)41;
int zero = 0;
long long int var_14 = -2803024787327439559LL;
short var_15 = (short)32099;
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
