#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4245192288679469064LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -2841648406011284099LL;
unsigned char var_5 = (unsigned char)167;
short var_11 = (short)-30236;
int zero = 0;
unsigned int var_12 = 1259639740U;
unsigned long long int var_13 = 6013408519814923726ULL;
short var_14 = (short)-20609;
short var_15 = (short)12200;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
