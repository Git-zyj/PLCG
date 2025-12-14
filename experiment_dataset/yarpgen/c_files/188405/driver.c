#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25963;
unsigned short var_4 = (unsigned short)1433;
unsigned long long int var_5 = 14134104543082943924ULL;
unsigned int var_6 = 2784394284U;
signed char var_7 = (signed char)81;
unsigned short var_9 = (unsigned short)16750;
unsigned short var_17 = (unsigned short)39439;
int zero = 0;
unsigned short var_19 = (unsigned short)463;
short var_20 = (short)-7973;
unsigned int var_21 = 707427256U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
