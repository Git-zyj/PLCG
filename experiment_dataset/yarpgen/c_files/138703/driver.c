#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14530684775278007387ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1469905772U;
unsigned char var_6 = (unsigned char)187;
_Bool var_7 = (_Bool)0;
long long int var_8 = 1342802910502587892LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_11 = 754388857047522122LL;
unsigned long long int var_12 = 6801708174377942747ULL;
unsigned long long int var_14 = 5555494572564430714ULL;
int zero = 0;
unsigned int var_15 = 1813013081U;
unsigned int var_16 = 2361515921U;
long long int var_17 = -1560580848489392107LL;
short var_18 = (short)-10713;
unsigned short var_19 = (unsigned short)26682;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
