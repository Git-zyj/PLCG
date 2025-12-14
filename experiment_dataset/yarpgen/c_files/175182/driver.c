#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1495640875;
short var_3 = (short)23129;
unsigned short var_4 = (unsigned short)21928;
unsigned long long int var_7 = 8480479951997060163ULL;
unsigned int var_10 = 785013487U;
unsigned short var_11 = (unsigned short)29713;
int zero = 0;
unsigned long long int var_14 = 13219522319125609611ULL;
unsigned short var_15 = (unsigned short)51630;
short var_16 = (short)23222;
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
