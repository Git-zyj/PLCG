#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 339754722;
long long int var_4 = 4933673402362129878LL;
unsigned short var_6 = (unsigned short)40824;
int var_7 = -1912376330;
long long int var_11 = 670940846699861192LL;
int zero = 0;
unsigned short var_12 = (unsigned short)63268;
long long int var_13 = -558054256435659758LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
