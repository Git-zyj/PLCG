#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 3542189933U;
unsigned char var_6 = (unsigned char)47;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1620935786U;
int var_10 = -1193415212;
unsigned char var_13 = (unsigned char)181;
signed char var_14 = (signed char)96;
signed char var_15 = (signed char)-120;
signed char var_18 = (signed char)-22;
int zero = 0;
unsigned short var_20 = (unsigned short)50254;
unsigned short var_21 = (unsigned short)1290;
unsigned short var_22 = (unsigned short)54385;
long long int var_23 = 2671665448380792667LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
