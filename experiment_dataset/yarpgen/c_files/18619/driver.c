#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1999516254;
int var_6 = 797203285;
unsigned int var_10 = 3237973918U;
short var_11 = (short)12592;
int zero = 0;
int var_13 = -56040865;
unsigned int var_14 = 941719002U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
