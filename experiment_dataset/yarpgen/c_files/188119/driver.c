#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
int var_2 = -1593569437;
signed char var_5 = (signed char)1;
int var_6 = -1023273801;
unsigned short var_8 = (unsigned short)37570;
signed char var_9 = (signed char)58;
int zero = 0;
long long int var_10 = -2016485951210238610LL;
long long int var_11 = -5035671462706123891LL;
unsigned char var_12 = (unsigned char)54;
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
