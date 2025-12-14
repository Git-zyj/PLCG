#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1429002400;
int var_1 = -1544041561;
short var_2 = (short)2629;
unsigned long long int var_4 = 7108678717140464117ULL;
unsigned char var_6 = (unsigned char)91;
signed char var_10 = (signed char)4;
int var_11 = -791577895;
signed char var_14 = (signed char)-98;
int var_15 = 938406808;
short var_17 = (short)-15680;
int zero = 0;
unsigned short var_19 = (unsigned short)53276;
signed char var_20 = (signed char)15;
short var_21 = (short)8135;
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
