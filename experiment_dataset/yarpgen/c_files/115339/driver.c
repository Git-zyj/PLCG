#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 623263283U;
unsigned char var_1 = (unsigned char)0;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 927626484U;
unsigned long long int var_6 = 10120499444928147420ULL;
unsigned char var_7 = (unsigned char)188;
long long int var_10 = -2598692212535793102LL;
unsigned int var_11 = 1609930856U;
int zero = 0;
short var_12 = (short)13555;
long long int var_13 = 9111171129689819701LL;
short var_14 = (short)25716;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
