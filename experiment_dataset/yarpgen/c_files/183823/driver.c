#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-39;
unsigned int var_6 = 1911096312U;
short var_7 = (short)16658;
signed char var_8 = (signed char)108;
signed char var_9 = (signed char)-16;
short var_10 = (short)27230;
signed char var_11 = (signed char)-73;
int zero = 0;
short var_13 = (short)-24837;
signed char var_14 = (signed char)-20;
signed char var_15 = (signed char)13;
unsigned char var_16 = (unsigned char)174;
unsigned int var_17 = 1621123655U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
