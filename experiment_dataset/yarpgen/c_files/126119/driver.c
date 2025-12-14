#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2151692748942083470ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12342214162584607253ULL;
short var_7 = (short)-12957;
unsigned int var_9 = 2662173146U;
int zero = 0;
long long int var_13 = -4418503975175588931LL;
signed char var_14 = (signed char)34;
unsigned short var_15 = (unsigned short)46830;
unsigned short var_16 = (unsigned short)15831;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
