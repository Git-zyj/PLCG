#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
long long int var_1 = -7949415860154801390LL;
short var_3 = (short)13262;
long long int var_5 = -4273530851857873525LL;
unsigned int var_6 = 2714528202U;
unsigned long long int var_7 = 12974052584453401535ULL;
int zero = 0;
long long int var_10 = -1891887153231385812LL;
unsigned int var_11 = 896135817U;
short var_12 = (short)15420;
unsigned long long int var_13 = 8965337399209165765ULL;
signed char var_14 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
