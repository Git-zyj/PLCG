#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -2020984458;
_Bool var_4 = (_Bool)1;
long long int var_5 = -6854434596459800815LL;
unsigned short var_8 = (unsigned short)31458;
int var_10 = 783503321;
long long int var_13 = -7105289957567595181LL;
int var_15 = -1901661338;
unsigned char var_17 = (unsigned char)173;
int zero = 0;
int var_18 = 738164958;
int var_19 = 1081084618;
int var_20 = -2036206142;
unsigned short var_21 = (unsigned short)46496;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
