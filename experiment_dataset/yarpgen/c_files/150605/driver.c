#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18251;
unsigned char var_2 = (unsigned char)45;
unsigned short var_3 = (unsigned short)18501;
long long int var_4 = -6422858425507823926LL;
short var_6 = (short)9085;
short var_7 = (short)-5355;
signed char var_8 = (signed char)33;
unsigned int var_9 = 1325555503U;
unsigned char var_11 = (unsigned char)194;
unsigned int var_12 = 2116046247U;
short var_14 = (short)13828;
unsigned int var_15 = 2174993354U;
long long int var_16 = -7815311688066135429LL;
long long int var_17 = -4294148446034443138LL;
unsigned int var_18 = 3238796864U;
unsigned char var_19 = (unsigned char)159;
int zero = 0;
unsigned short var_20 = (unsigned short)57808;
int var_21 = 326611039;
unsigned short var_22 = (unsigned short)41830;
int var_23 = -542689874;
short var_24 = (short)172;
long long int var_25 = -90521636139896231LL;
signed char var_26 = (signed char)-40;
unsigned char var_27 = (unsigned char)40;
unsigned char var_28 = (unsigned char)70;
long long int var_29 = 1948790928081776905LL;
short var_30 = (short)7337;
unsigned int var_31 = 2460556375U;
unsigned short var_32 = (unsigned short)34124;
unsigned char var_33 = (unsigned char)171;
long long int var_34 = -808707162919266414LL;
long long int arr_0 [20] ;
_Bool arr_1 [20] ;
_Bool arr_2 [20] ;
short arr_4 [14] ;
long long int arr_7 [25] ;
long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 7639765412524285543LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)18045;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -2093701229492858600LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 2303935619159444332LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
