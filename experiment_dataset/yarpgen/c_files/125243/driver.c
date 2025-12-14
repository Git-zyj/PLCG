#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5521926485947248088ULL;
signed char var_3 = (signed char)84;
unsigned int var_4 = 2989586126U;
unsigned int var_7 = 3556249806U;
signed char var_8 = (signed char)20;
unsigned short var_9 = (unsigned short)64500;
int zero = 0;
unsigned short var_10 = (unsigned short)25415;
short var_11 = (short)-2309;
unsigned long long int var_12 = 10481874949858600529ULL;
unsigned char var_13 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
