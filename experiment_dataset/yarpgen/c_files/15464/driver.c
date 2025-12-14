#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)60365;
unsigned int var_6 = 369986719U;
unsigned char var_9 = (unsigned char)236;
unsigned int var_13 = 3391077688U;
unsigned long long int var_16 = 2175976692601519431ULL;
unsigned long long int var_17 = 12072640257863563634ULL;
int zero = 0;
long long int var_19 = -7966340529151813188LL;
unsigned int var_20 = 3806511977U;
unsigned short var_21 = (unsigned short)17055;
unsigned char var_22 = (unsigned char)226;
unsigned long long int var_23 = 2617192977080300935ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
