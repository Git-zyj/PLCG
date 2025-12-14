#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11822027627506670161ULL;
short var_2 = (short)3321;
short var_3 = (short)-21765;
short var_5 = (short)25060;
long long int var_8 = 1079445523302021701LL;
signed char var_11 = (signed char)31;
int zero = 0;
long long int var_16 = 2093618184509540545LL;
signed char var_17 = (signed char)-23;
short var_18 = (short)-17416;
unsigned short var_19 = (unsigned short)27619;
void init() {
}

void checksum() {
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
