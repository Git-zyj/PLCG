#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1366080935;
int var_3 = 2103403604;
unsigned int var_4 = 2340363087U;
unsigned int var_5 = 654716215U;
unsigned short var_7 = (unsigned short)60168;
unsigned short var_13 = (unsigned short)28398;
unsigned char var_15 = (unsigned char)186;
unsigned int var_18 = 2012246617U;
int var_19 = 1541402565;
int zero = 0;
unsigned int var_20 = 3997618756U;
int var_21 = 1013913888;
unsigned char var_22 = (unsigned char)19;
void init() {
}

void checksum() {
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
