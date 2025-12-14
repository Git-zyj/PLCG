#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7965359963758508253ULL;
signed char var_2 = (signed char)-122;
unsigned int var_3 = 1955726647U;
signed char var_4 = (signed char)48;
unsigned char var_5 = (unsigned char)137;
unsigned short var_6 = (unsigned short)37888;
long long int var_7 = -1552699002123531427LL;
unsigned int var_8 = 74688832U;
unsigned int var_10 = 693002485U;
unsigned long long int var_11 = 13272531186544745366ULL;
int var_12 = 326654124;
signed char var_13 = (signed char)115;
unsigned long long int var_14 = 11262479492188979446ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)59697;
signed char var_17 = (signed char)-117;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-26992;
unsigned char var_20 = (unsigned char)253;
unsigned char var_21 = (unsigned char)151;
long long int var_22 = -5777432197788689939LL;
unsigned short var_23 = (unsigned short)49059;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)38611;
unsigned char var_26 = (unsigned char)194;
signed char var_27 = (signed char)-126;
unsigned char var_28 = (unsigned char)40;
int var_29 = -352532678;
int var_30 = 1808236704;
unsigned char var_31 = (unsigned char)189;
unsigned int var_32 = 2918708155U;
long long int var_33 = -1082549568422184443LL;
unsigned char var_34 = (unsigned char)192;
short arr_10 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-2197;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
