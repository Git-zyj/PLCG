#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7946969163119811445LL;
short var_4 = (short)-9212;
unsigned char var_10 = (unsigned char)80;
int var_12 = -307490556;
unsigned short var_13 = (unsigned short)42007;
int zero = 0;
unsigned short var_19 = (unsigned short)45535;
int var_20 = -780452191;
short var_21 = (short)-25066;
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
