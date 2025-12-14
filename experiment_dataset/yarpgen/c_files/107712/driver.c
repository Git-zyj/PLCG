#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1683482456;
signed char var_1 = (signed char)-18;
unsigned int var_2 = 2372749259U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2301667057U;
unsigned long long int var_8 = 7879214681066470951ULL;
signed char var_12 = (signed char)-102;
int zero = 0;
unsigned long long int var_15 = 10602830558084435813ULL;
unsigned long long int var_16 = 14518791429345667467ULL;
unsigned char var_17 = (unsigned char)81;
signed char var_18 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
