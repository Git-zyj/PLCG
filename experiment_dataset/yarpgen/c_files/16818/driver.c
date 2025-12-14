#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
unsigned int var_9 = 3610537271U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)7618;
int zero = 0;
unsigned int var_15 = 1035497246U;
int var_16 = -1643904222;
unsigned char var_17 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
