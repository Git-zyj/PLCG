#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50965;
short var_3 = (short)-32233;
signed char var_5 = (signed char)97;
long long int var_9 = -6759254680071864245LL;
unsigned int var_15 = 1375327902U;
int zero = 0;
signed char var_17 = (signed char)-15;
long long int var_18 = -6941182096233650432LL;
unsigned int var_19 = 1706892233U;
void init() {
}

void checksum() {
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
