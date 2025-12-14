#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
unsigned short var_3 = (unsigned short)46630;
unsigned short var_4 = (unsigned short)44170;
unsigned short var_8 = (unsigned short)22302;
int var_9 = -1149043636;
unsigned char var_10 = (unsigned char)186;
long long int var_17 = 295684651678428963LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2045944153U;
int var_21 = 2122991834;
void init() {
}

void checksum() {
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
