#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55195;
unsigned short var_7 = (unsigned short)61929;
unsigned int var_9 = 2011976238U;
signed char var_11 = (signed char)-82;
long long int var_12 = -3086964171384995678LL;
int zero = 0;
signed char var_14 = (signed char)76;
unsigned int var_15 = 1325074061U;
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
