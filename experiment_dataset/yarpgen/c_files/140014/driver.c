#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 960880094974561775LL;
unsigned char var_1 = (unsigned char)168;
long long int var_2 = 4660408686091659649LL;
unsigned short var_3 = (unsigned short)18120;
unsigned int var_4 = 786023589U;
unsigned long long int var_5 = 13182466783075578766ULL;
unsigned long long int var_6 = 3104572276194359064ULL;
unsigned char var_7 = (unsigned char)208;
long long int var_8 = 7508926213190348729LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)15641;
short var_11 = (short)-12437;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7456274329392543555LL;
short var_15 = (short)15151;
unsigned long long int var_16 = 5217168992816507971ULL;
unsigned long long int var_17 = 1822754144095846522ULL;
signed char var_18 = (signed char)-95;
unsigned long long int var_19 = 6476563802467341700ULL;
long long int var_20 = 4620183895846980993LL;
unsigned char var_21 = (unsigned char)161;
unsigned long long int var_22 = 9524250817336805343ULL;
unsigned long long int var_23 = 8872907742663293645ULL;
signed char var_24 = (signed char)-111;
signed char var_25 = (signed char)-56;
unsigned char var_26 = (unsigned char)107;
unsigned short arr_10 [19] ;
_Bool arr_13 [19] ;
unsigned short arr_14 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)64657;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21405 : (unsigned short)4833;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
