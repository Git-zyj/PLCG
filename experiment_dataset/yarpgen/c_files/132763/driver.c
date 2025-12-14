#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)7464;
int var_5 = 1690776851;
short var_8 = (short)-29152;
short var_10 = (short)19467;
int var_11 = 1900799764;
long long int var_12 = 2485159713628055500LL;
short var_14 = (short)-15719;
long long int var_18 = -1398686248015221794LL;
int zero = 0;
int var_19 = 1856348892;
unsigned int var_20 = 3188635140U;
short var_21 = (short)23429;
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
