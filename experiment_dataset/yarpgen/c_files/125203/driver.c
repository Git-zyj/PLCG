#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1656789279U;
unsigned char var_3 = (unsigned char)220;
unsigned short var_4 = (unsigned short)49728;
unsigned int var_5 = 438984394U;
unsigned char var_6 = (unsigned char)11;
unsigned int var_7 = 4285033964U;
long long int var_8 = -410940703221495824LL;
signed char var_9 = (signed char)-42;
unsigned char var_10 = (unsigned char)196;
signed char var_11 = (signed char)-56;
unsigned long long int var_13 = 2938674793227127326ULL;
int zero = 0;
int var_14 = 601907786;
unsigned int var_15 = 1283445651U;
unsigned char var_16 = (unsigned char)6;
unsigned long long int var_17 = 233232490313729854ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
