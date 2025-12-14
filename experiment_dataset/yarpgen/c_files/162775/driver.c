#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13951291977458510171ULL;
int var_6 = -566882549;
unsigned long long int var_8 = 7855628192577990609ULL;
unsigned int var_14 = 2085804639U;
int zero = 0;
short var_18 = (short)-13601;
unsigned long long int var_19 = 3680990366828704501ULL;
short var_20 = (short)26020;
int var_21 = 2072162920;
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
