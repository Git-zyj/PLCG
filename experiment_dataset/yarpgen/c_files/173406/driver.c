#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12059685755818332836ULL;
long long int var_3 = -1974649710501540967LL;
short var_10 = (short)-2629;
short var_12 = (short)-20767;
int zero = 0;
signed char var_15 = (signed char)-2;
unsigned char var_16 = (unsigned char)237;
unsigned short var_17 = (unsigned short)37688;
unsigned int var_18 = 1531990118U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
