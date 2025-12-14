#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22983;
unsigned char var_8 = (unsigned char)3;
long long int var_10 = -3619826790296292035LL;
unsigned char var_15 = (unsigned char)49;
int zero = 0;
long long int var_18 = 2052044502853419450LL;
int var_19 = 1572687337;
int var_20 = 1700027941;
unsigned int var_21 = 1504741980U;
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
