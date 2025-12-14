#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
long long int var_1 = 3701231708690377106LL;
int var_3 = 1186846452;
signed char var_4 = (signed char)87;
unsigned char var_5 = (unsigned char)230;
int var_6 = -296930860;
long long int var_7 = 7065043076547490197LL;
unsigned char var_9 = (unsigned char)167;
int zero = 0;
long long int var_10 = 1845987298932778654LL;
unsigned int var_11 = 1173257411U;
unsigned long long int var_12 = 18210047308761890148ULL;
int var_13 = -455987845;
unsigned long long int var_14 = 13500369396437642053ULL;
unsigned long long int var_15 = 9892661014038152326ULL;
unsigned char var_16 = (unsigned char)162;
unsigned char var_17 = (unsigned char)231;
unsigned long long int var_18 = 4058453891254139403ULL;
unsigned char var_19 = (unsigned char)195;
long long int var_20 = 7827952343444578766LL;
short var_21 = (short)-27960;
unsigned long long int var_22 = 8367965839018574362ULL;
long long int var_23 = -8595338095064530148LL;
unsigned char var_24 = (unsigned char)208;
long long int var_25 = 6179919335035452896LL;
int var_26 = -710691869;
short var_27 = (short)-8563;
short var_28 = (short)16206;
signed char var_29 = (signed char)12;
unsigned long long int var_30 = 313778883249541329ULL;
int var_31 = -40252936;
unsigned char var_32 = (unsigned char)241;
unsigned int var_33 = 4281930649U;
unsigned int var_34 = 1794748343U;
unsigned int arr_6 [15] ;
int arr_7 [15] ;
unsigned long long int arr_16 [15] ;
unsigned char arr_19 [15] ;
signed char arr_36 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 3380232719U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = -77369285;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 13449072201211432901ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-58 : (signed char)67;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
