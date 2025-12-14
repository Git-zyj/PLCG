#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4699456214169443472LL;
unsigned short var_2 = (unsigned short)8325;
unsigned short var_3 = (unsigned short)53776;
signed char var_4 = (signed char)90;
long long int var_5 = 7342879050174846298LL;
int var_6 = -1892428324;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)9738;
long long int var_9 = -8645579203534039678LL;
signed char var_10 = (signed char)-71;
long long int var_11 = -8047357525918845496LL;
unsigned short var_12 = (unsigned short)19198;
unsigned int var_13 = 414034268U;
unsigned short var_14 = (unsigned short)61509;
long long int var_15 = 7963036079600625958LL;
short var_16 = (short)13940;
int zero = 0;
long long int var_17 = 7887773610284830184LL;
signed char var_18 = (signed char)-31;
unsigned short var_19 = (unsigned short)27913;
unsigned long long int var_20 = 18271231514848036140ULL;
signed char var_21 = (signed char)-19;
long long int var_22 = 8497240704468398357LL;
int var_23 = -987379259;
unsigned short var_24 = (unsigned short)49485;
signed char var_25 = (signed char)-6;
unsigned short var_26 = (unsigned short)43266;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)11217;
unsigned char var_29 = (unsigned char)197;
long long int var_30 = -1473917872615088010LL;
unsigned short var_31 = (unsigned short)8394;
unsigned char var_32 = (unsigned char)161;
unsigned short var_33 = (unsigned short)9281;
signed char var_34 = (signed char)-50;
signed char var_35 = (signed char)37;
unsigned short var_36 = (unsigned short)12480;
signed char var_37 = (signed char)-33;
long long int var_38 = 1610882886560943556LL;
int var_39 = -612455347;
short var_40 = (short)18220;
unsigned short var_41 = (unsigned short)60533;
unsigned char var_42 = (unsigned char)63;
unsigned char var_43 = (unsigned char)203;
long long int var_44 = 9063622087298743151LL;
_Bool var_45 = (_Bool)1;
signed char var_46 = (signed char)-93;
signed char arr_3 [24] ;
long long int arr_12 [21] [21] ;
signed char arr_20 [23] ;
unsigned short arr_25 [23] ;
unsigned short arr_35 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -2294301759872538579LL : -3108703643231228816LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50031 : (unsigned short)31925;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_35 [i_0] = (unsigned short)3643;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
