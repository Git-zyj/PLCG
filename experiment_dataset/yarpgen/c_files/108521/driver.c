#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3251234754U;
unsigned int var_2 = 3280604737U;
unsigned int var_4 = 4146305269U;
long long int var_6 = 818332676764199354LL;
unsigned char var_8 = (unsigned char)86;
long long int var_9 = -5350913205020784182LL;
unsigned char var_11 = (unsigned char)42;
unsigned char var_16 = (unsigned char)217;
unsigned int var_17 = 3493507304U;
int zero = 0;
long long int var_20 = 1214625062041433597LL;
long long int var_21 = -6773262932799929077LL;
unsigned char var_22 = (unsigned char)230;
unsigned int var_23 = 2679533563U;
long long int var_24 = -6827695784824651522LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
