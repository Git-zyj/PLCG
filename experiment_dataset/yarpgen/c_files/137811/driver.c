#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3403662441U;
unsigned short var_2 = (unsigned short)29325;
unsigned long long int var_3 = 13180429180058796837ULL;
unsigned short var_8 = (unsigned short)39219;
unsigned long long int var_11 = 824566539791788459ULL;
signed char var_13 = (signed char)-53;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)16100;
long long int var_22 = -7741133651623639497LL;
unsigned char var_23 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
