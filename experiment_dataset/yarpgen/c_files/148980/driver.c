#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1806323756U;
unsigned char var_1 = (unsigned char)165;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-112;
unsigned int var_4 = 4179425427U;
unsigned char var_5 = (unsigned char)142;
unsigned int var_6 = 713033385U;
signed char var_7 = (signed char)11;
unsigned char var_8 = (unsigned char)216;
int zero = 0;
unsigned char var_10 = (unsigned char)154;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)176;
unsigned int var_13 = 554729644U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
