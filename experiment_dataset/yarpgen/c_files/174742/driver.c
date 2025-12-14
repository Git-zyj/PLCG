#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7166205354031870436ULL;
unsigned char var_5 = (unsigned char)149;
int var_6 = 1542292068;
unsigned int var_7 = 2516556555U;
unsigned int var_9 = 1443209132U;
unsigned long long int var_10 = 8349413175784626060ULL;
int var_11 = 171821549;
signed char var_13 = (signed char)4;
unsigned char var_14 = (unsigned char)171;
unsigned short var_15 = (unsigned short)36748;
int zero = 0;
int var_16 = 945808886;
unsigned short var_17 = (unsigned short)1676;
signed char var_18 = (signed char)16;
signed char var_19 = (signed char)-16;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
