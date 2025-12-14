#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4003851611U;
int var_1 = -2046192895;
unsigned char var_3 = (unsigned char)244;
long long int var_6 = -8293546635952533634LL;
short var_7 = (short)-13567;
int var_11 = 557809275;
long long int var_14 = 3043422660251378637LL;
int zero = 0;
unsigned int var_15 = 1412701709U;
short var_16 = (short)-27535;
long long int var_17 = -5088826775994720860LL;
short var_18 = (short)-26434;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
