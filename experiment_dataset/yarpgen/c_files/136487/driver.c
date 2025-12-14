#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16217125362637429923ULL;
unsigned short var_1 = (unsigned short)47358;
unsigned char var_2 = (unsigned char)56;
unsigned int var_5 = 2071565866U;
signed char var_7 = (signed char)-40;
unsigned long long int var_8 = 5437230922065166165ULL;
unsigned char var_10 = (unsigned char)184;
int zero = 0;
unsigned long long int var_11 = 1962796140327868477ULL;
short var_12 = (short)2610;
short var_13 = (short)-31685;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
