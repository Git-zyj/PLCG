#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20453;
unsigned long long int var_4 = 10249628349765873586ULL;
signed char var_5 = (signed char)-3;
unsigned int var_8 = 2130179756U;
short var_9 = (short)-9520;
int var_11 = 1354892659;
long long int var_12 = -2700103930850849657LL;
short var_15 = (short)-3203;
unsigned long long int var_16 = 5501887496561230821ULL;
unsigned char var_17 = (unsigned char)51;
int zero = 0;
signed char var_20 = (signed char)-53;
signed char var_21 = (signed char)40;
signed char var_22 = (signed char)-16;
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
