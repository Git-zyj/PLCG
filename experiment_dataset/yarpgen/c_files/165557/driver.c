#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56474;
int var_4 = 284852180;
short var_11 = (short)-23725;
signed char var_13 = (signed char)-107;
long long int var_14 = 5073589581679205059LL;
int zero = 0;
unsigned short var_17 = (unsigned short)5700;
long long int var_18 = 481403334607497052LL;
signed char var_19 = (signed char)-4;
short var_20 = (short)1871;
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
