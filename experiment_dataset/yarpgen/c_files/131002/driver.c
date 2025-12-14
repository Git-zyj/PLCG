#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48077;
unsigned int var_3 = 101573650U;
unsigned long long int var_5 = 6590826439376199329ULL;
int var_6 = -780010221;
short var_7 = (short)4249;
unsigned int var_12 = 2466435417U;
int zero = 0;
int var_14 = -671880975;
unsigned int var_15 = 3725237100U;
int var_16 = 1455063774;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
