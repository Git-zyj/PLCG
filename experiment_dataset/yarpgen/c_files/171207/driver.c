#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1623244231232636858ULL;
unsigned short var_4 = (unsigned short)41783;
unsigned int var_6 = 910816295U;
short var_10 = (short)28196;
int zero = 0;
unsigned long long int var_11 = 6493399367438877739ULL;
unsigned short var_12 = (unsigned short)5146;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
