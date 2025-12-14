#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22279;
long long int var_3 = 8920086280381471199LL;
int var_5 = 161437826;
unsigned int var_8 = 4171194737U;
int var_17 = -1036324968;
int zero = 0;
unsigned int var_18 = 1571334750U;
unsigned int var_19 = 4076011489U;
short var_20 = (short)12673;
int var_21 = -1889720624;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
