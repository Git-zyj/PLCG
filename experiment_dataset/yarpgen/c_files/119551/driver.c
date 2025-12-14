#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
unsigned long long int var_6 = 9815015197096561875ULL;
signed char var_7 = (signed char)-76;
unsigned long long int var_8 = 12908122141969141699ULL;
long long int var_9 = -8563584893152162342LL;
int zero = 0;
signed char var_11 = (signed char)72;
signed char var_12 = (signed char)-82;
unsigned long long int var_13 = 10177675708553497215ULL;
unsigned char var_14 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
