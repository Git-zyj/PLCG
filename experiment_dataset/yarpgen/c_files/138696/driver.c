#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2836223485676935095LL;
signed char var_4 = (signed char)69;
unsigned int var_5 = 3022257896U;
short var_7 = (short)20562;
unsigned char var_9 = (unsigned char)134;
unsigned short var_10 = (unsigned short)26047;
signed char var_13 = (signed char)93;
unsigned int var_14 = 2317111009U;
int zero = 0;
long long int var_18 = -5498233120464506627LL;
unsigned short var_19 = (unsigned short)10548;
signed char var_20 = (signed char)-30;
unsigned char var_21 = (unsigned char)61;
unsigned short var_22 = (unsigned short)20445;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
