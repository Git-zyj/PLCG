#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
unsigned int var_1 = 1276003054U;
unsigned long long int var_2 = 10234344721732655634ULL;
long long int var_4 = -592996821916931976LL;
short var_7 = (short)-7798;
unsigned short var_8 = (unsigned short)13103;
unsigned char var_10 = (unsigned char)181;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-24165;
unsigned short var_13 = (unsigned short)43313;
int zero = 0;
short var_17 = (short)-30474;
unsigned short var_18 = (unsigned short)62644;
unsigned long long int var_19 = 14610566416467066393ULL;
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
