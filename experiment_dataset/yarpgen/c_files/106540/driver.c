#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13754918426731584404ULL;
long long int var_3 = -7157190115690324666LL;
long long int var_8 = -6817103785202838778LL;
long long int var_11 = 1753165135997427729LL;
unsigned char var_12 = (unsigned char)246;
unsigned long long int var_14 = 18174194683798126075ULL;
long long int var_16 = -292115466817724652LL;
_Bool var_17 = (_Bool)1;
long long int var_19 = 4736092665412863970LL;
int zero = 0;
int var_20 = 6995921;
unsigned short var_21 = (unsigned short)1884;
signed char var_22 = (signed char)34;
unsigned long long int var_23 = 14520278027175219355ULL;
unsigned char var_24 = (unsigned char)100;
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
