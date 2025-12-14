#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7204202268820179560LL;
long long int var_2 = 7854333890961727617LL;
short var_3 = (short)3060;
long long int var_8 = -4780618221923098698LL;
unsigned char var_10 = (unsigned char)66;
long long int var_11 = 3994733114013072609LL;
long long int var_12 = -5207465440509157725LL;
int zero = 0;
unsigned long long int var_14 = 4702536415244356891ULL;
short var_15 = (short)-23131;
short var_16 = (short)-9541;
long long int var_17 = -5036290113399455994LL;
short var_18 = (short)-17270;
short var_19 = (short)12470;
unsigned long long int var_20 = 9986079582011378483ULL;
short var_21 = (short)-25456;
long long int var_22 = 6896681792276936051LL;
_Bool var_23 = (_Bool)1;
long long int var_24 = -6216717160357307112LL;
long long int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
signed char arr_2 [14] ;
long long int arr_3 [14] ;
long long int arr_4 [14] ;
short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1014714507261570477LL : -8108584010204065880LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)124 : (signed char)9;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 6931737207561420948LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1149115426577438471LL : -4033158178900400614LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)27771;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
