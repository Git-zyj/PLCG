#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
short var_1 = (short)-22127;
unsigned short var_3 = (unsigned short)60745;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-117;
unsigned char var_15 = (unsigned char)193;
int zero = 0;
unsigned int var_19 = 3818068109U;
int var_20 = 1444677862;
long long int var_21 = 3691934237602723467LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
