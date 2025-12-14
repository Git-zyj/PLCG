#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 215252652850611821LL;
short var_4 = (short)-787;
signed char var_9 = (signed char)-31;
int zero = 0;
unsigned int var_10 = 3004725132U;
long long int var_11 = 2020892455112646293LL;
unsigned short var_12 = (unsigned short)54437;
signed char var_13 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
