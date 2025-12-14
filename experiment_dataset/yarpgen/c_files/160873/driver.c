#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)19;
unsigned int var_5 = 2818014382U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)180;
unsigned char var_9 = (unsigned char)216;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 533793391U;
signed char var_13 = (signed char)-12;
int zero = 0;
unsigned long long int var_15 = 1539513137043019820ULL;
int var_16 = 1780370988;
short var_17 = (short)-28926;
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
