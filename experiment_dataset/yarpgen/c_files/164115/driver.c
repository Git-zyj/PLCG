#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1226697925;
signed char var_2 = (signed char)20;
unsigned short var_3 = (unsigned short)37649;
unsigned long long int var_6 = 4170620311525112106ULL;
unsigned short var_7 = (unsigned short)530;
_Bool var_9 = (_Bool)0;
long long int var_10 = 4258356998332872638LL;
unsigned short var_13 = (unsigned short)10785;
int zero = 0;
unsigned int var_18 = 2717076406U;
unsigned long long int var_19 = 793226774173822033ULL;
int var_20 = 1588753054;
short var_21 = (short)-20394;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
