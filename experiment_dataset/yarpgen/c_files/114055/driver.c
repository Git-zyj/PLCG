#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1677517211200735869LL;
unsigned long long int var_1 = 3765832021298326638ULL;
unsigned short var_2 = (unsigned short)26662;
unsigned long long int var_3 = 11055909323403261030ULL;
unsigned short var_4 = (unsigned short)43701;
unsigned int var_5 = 2212934177U;
signed char var_6 = (signed char)11;
unsigned short var_7 = (unsigned short)34737;
unsigned int var_9 = 461379863U;
long long int var_10 = -5224162045163310442LL;
unsigned long long int var_11 = 13432480650538131668ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)46831;
long long int var_13 = -5172067115357730787LL;
signed char var_14 = (signed char)39;
short var_15 = (short)1481;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
