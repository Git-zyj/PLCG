#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2405060366U;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8859373335777887029LL;
short var_4 = (short)3043;
unsigned short var_8 = (unsigned short)28814;
unsigned int var_9 = 4149432865U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2155336664U;
int zero = 0;
unsigned int var_13 = 1136748059U;
long long int var_14 = -3930234957335039702LL;
signed char var_15 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
