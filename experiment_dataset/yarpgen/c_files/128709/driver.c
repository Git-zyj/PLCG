#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-20775;
unsigned long long int var_10 = 17477250737247264137ULL;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)-115;
int zero = 0;
unsigned long long int var_19 = 10668910000621264262ULL;
unsigned long long int var_20 = 10005904190877228300ULL;
short var_21 = (short)7032;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
