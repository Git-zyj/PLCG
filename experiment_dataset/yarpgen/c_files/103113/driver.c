#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4868495724848528247ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)53937;
signed char var_6 = (signed char)-100;
signed char var_7 = (signed char)-30;
unsigned short var_8 = (unsigned short)37649;
unsigned long long int var_9 = 850754389064091572ULL;
unsigned short var_18 = (unsigned short)11029;
int zero = 0;
unsigned int var_19 = 3412526133U;
unsigned short var_20 = (unsigned short)22677;
unsigned int var_21 = 873004692U;
unsigned short var_22 = (unsigned short)18382;
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
