#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1907495752;
signed char var_3 = (signed char)-43;
int var_4 = 1256068211;
unsigned long long int var_6 = 9667245483810928387ULL;
unsigned long long int var_7 = 12620676221500642480ULL;
unsigned char var_10 = (unsigned char)13;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2451918373U;
unsigned char var_18 = (unsigned char)233;
short var_19 = (short)15998;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
