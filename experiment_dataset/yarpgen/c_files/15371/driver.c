#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_1 = (unsigned char)80;
signed char var_5 = (signed char)60;
unsigned char var_6 = (unsigned char)235;
int var_7 = 1522805361;
unsigned long long int var_8 = 16636811340727839005ULL;
signed char var_9 = (signed char)100;
unsigned int var_10 = 4074934358U;
long long int var_11 = -9175574363784426343LL;
unsigned short var_13 = (unsigned short)45888;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3342879812U;
int zero = 0;
long long int var_18 = -8139500186456340971LL;
unsigned char var_19 = (unsigned char)205;
void init() {
}

void checksum() {
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
