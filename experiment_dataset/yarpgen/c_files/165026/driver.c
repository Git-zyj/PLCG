#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
short var_2 = (short)172;
unsigned long long int var_3 = 10961580337606000898ULL;
unsigned int var_4 = 3293305428U;
unsigned long long int var_7 = 5697355748759824274ULL;
int var_9 = -1536203599;
long long int var_11 = -7672051427741061383LL;
unsigned long long int var_12 = 12470495983958173396ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-20;
signed char var_15 = (signed char)-32;
long long int var_16 = 993454934877480993LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
