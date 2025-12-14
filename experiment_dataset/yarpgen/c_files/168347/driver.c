#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-62;
int var_2 = 564148451;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)30;
unsigned int var_10 = 1517016708U;
unsigned int var_13 = 2511938684U;
short var_15 = (short)-16517;
unsigned char var_16 = (unsigned char)69;
int zero = 0;
unsigned int var_19 = 3753489667U;
short var_20 = (short)-23654;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
