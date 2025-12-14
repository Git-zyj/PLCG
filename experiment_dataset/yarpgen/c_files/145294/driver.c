#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10723610512712893995ULL;
unsigned short var_3 = (unsigned short)40839;
unsigned int var_7 = 3217203077U;
signed char var_9 = (signed char)92;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)160;
int var_13 = -749134204;
short var_15 = (short)-19142;
int zero = 0;
long long int var_16 = -6958530121093968412LL;
unsigned char var_17 = (unsigned char)189;
signed char var_18 = (signed char)-39;
unsigned int var_19 = 802797431U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
