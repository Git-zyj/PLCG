#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17585;
short var_2 = (short)2104;
unsigned long long int var_4 = 931362723285081319ULL;
unsigned short var_5 = (unsigned short)42992;
signed char var_7 = (signed char)-29;
unsigned char var_10 = (unsigned char)136;
unsigned int var_11 = 1273738077U;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -384909186;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
