#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1627899520;
signed char var_5 = (signed char)-14;
long long int var_11 = -3530970472577121885LL;
unsigned short var_13 = (unsigned short)33949;
short var_14 = (short)-20773;
long long int var_15 = 8025931291575514362LL;
int zero = 0;
short var_18 = (short)2169;
short var_19 = (short)13843;
unsigned short var_20 = (unsigned short)1021;
void init() {
}

void checksum() {
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
