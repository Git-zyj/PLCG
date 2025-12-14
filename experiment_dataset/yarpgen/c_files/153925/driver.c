#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
signed char var_5 = (signed char)-30;
unsigned char var_7 = (unsigned char)70;
long long int var_12 = 1798111532487812712LL;
signed char var_14 = (signed char)7;
unsigned short var_17 = (unsigned short)40530;
int zero = 0;
signed char var_18 = (signed char)-3;
long long int var_19 = 7797030629978923323LL;
short var_20 = (short)6419;
unsigned char var_21 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
