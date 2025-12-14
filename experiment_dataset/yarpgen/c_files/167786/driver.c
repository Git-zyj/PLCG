#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12287252318953045056ULL;
int var_3 = 176630891;
unsigned short var_5 = (unsigned short)45396;
long long int var_7 = -6102556035926889020LL;
long long int var_10 = 5559269071866687624LL;
unsigned char var_11 = (unsigned char)6;
signed char var_12 = (signed char)7;
unsigned char var_13 = (unsigned char)154;
int zero = 0;
int var_15 = 65092368;
short var_16 = (short)29794;
unsigned char var_17 = (unsigned char)13;
unsigned long long int var_18 = 5538210633456893559ULL;
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
