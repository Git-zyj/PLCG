#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27093;
unsigned char var_2 = (unsigned char)180;
unsigned char var_4 = (unsigned char)251;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3397742914U;
long long int var_8 = -933784584098428098LL;
unsigned short var_10 = (unsigned short)48196;
_Bool var_11 = (_Bool)0;
long long int var_12 = -7942276365505158453LL;
unsigned char var_14 = (unsigned char)191;
int var_15 = 1251216448;
int zero = 0;
long long int var_16 = -3130186937470776000LL;
signed char var_17 = (signed char)-52;
long long int var_18 = 234739766081402144LL;
signed char var_19 = (signed char)-100;
void init() {
}

void checksum() {
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
