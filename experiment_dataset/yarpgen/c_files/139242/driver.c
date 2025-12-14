#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27372;
unsigned char var_6 = (unsigned char)3;
unsigned char var_10 = (unsigned char)119;
unsigned int var_15 = 830309065U;
int zero = 0;
unsigned char var_18 = (unsigned char)48;
long long int var_19 = 2457133693673406562LL;
unsigned long long int var_20 = 1022069838717171016ULL;
long long int var_21 = -3911138835704507508LL;
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
