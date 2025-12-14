#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)61;
short var_5 = (short)18281;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)42583;
unsigned char var_11 = (unsigned char)82;
unsigned long long int var_14 = 4671110381618098949ULL;
unsigned char var_15 = (unsigned char)87;
signed char var_16 = (signed char)-10;
int var_17 = -939102169;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_20 = -8131527149468019813LL;
unsigned short var_21 = (unsigned short)41313;
unsigned short var_22 = (unsigned short)65388;
int var_23 = 108908659;
long long int var_24 = -4874963281264914945LL;
unsigned short var_25 = (unsigned short)56009;
_Bool arr_0 [13] ;
_Bool arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
