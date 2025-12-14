#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27470;
signed char var_3 = (signed char)54;
signed char var_8 = (signed char)62;
signed char var_14 = (signed char)-96;
short var_16 = (short)1588;
int zero = 0;
short var_17 = (short)-17784;
unsigned short var_18 = (unsigned short)35562;
long long int var_19 = -3141794550384292368LL;
signed char var_20 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
