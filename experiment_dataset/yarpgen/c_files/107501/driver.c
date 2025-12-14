#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)7;
unsigned long long int var_3 = 14028894967997380538ULL;
unsigned char var_8 = (unsigned char)217;
unsigned int var_11 = 3998163540U;
int zero = 0;
unsigned int var_16 = 3305117579U;
unsigned short var_17 = (unsigned short)56757;
unsigned long long int var_18 = 7233694943120963560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
