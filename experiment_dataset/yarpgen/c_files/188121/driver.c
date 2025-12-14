#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8360756643768099562ULL;
unsigned char var_4 = (unsigned char)221;
short var_6 = (short)-30581;
unsigned long long int var_8 = 14620497038259272634ULL;
unsigned long long int var_10 = 15170047569278311285ULL;
unsigned short var_13 = (unsigned short)9344;
short var_15 = (short)22630;
unsigned char var_16 = (unsigned char)93;
int zero = 0;
unsigned short var_17 = (unsigned short)3309;
short var_18 = (short)14636;
unsigned long long int var_19 = 15450963969444491726ULL;
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
