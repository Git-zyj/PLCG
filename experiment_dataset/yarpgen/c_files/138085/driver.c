#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15017;
unsigned long long int var_1 = 8968901554512487263ULL;
int var_2 = -1352037971;
long long int var_3 = -7177406395170964309LL;
signed char var_5 = (signed char)-104;
unsigned char var_6 = (unsigned char)104;
long long int var_7 = -2395857790895838603LL;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)2;
int zero = 0;
unsigned char var_13 = (unsigned char)109;
int var_14 = 107448496;
unsigned long long int var_15 = 17003977381823707847ULL;
unsigned short var_16 = (unsigned short)55363;
signed char var_17 = (signed char)33;
unsigned short var_18 = (unsigned short)50661;
unsigned short var_19 = (unsigned short)30370;
unsigned short var_20 = (unsigned short)54828;
unsigned int var_21 = 2307368966U;
unsigned short var_22 = (unsigned short)64580;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)36808;
unsigned int var_25 = 1951245189U;
unsigned short var_26 = (unsigned short)7834;
unsigned short var_27 = (unsigned short)63308;
signed char var_28 = (signed char)0;
unsigned int var_29 = 1069257583U;
signed char var_30 = (signed char)-78;
unsigned int var_31 = 578172329U;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 5274021361286864090ULL;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 2167974347U;
unsigned int var_36 = 2700733369U;
signed char var_37 = (signed char)59;
unsigned short var_38 = (unsigned short)35046;
unsigned int var_39 = 3718390776U;
unsigned short var_40 = (unsigned short)40945;
int arr_1 [16] ;
unsigned short arr_5 [16] [16] ;
unsigned int arr_11 [16] [16] [16] [16] [16] ;
unsigned short arr_17 [23] ;
int arr_18 [23] ;
unsigned short arr_19 [24] ;
long long int arr_20 [24] ;
_Bool arr_21 [24] ;
unsigned char arr_27 [18] ;
unsigned long long int arr_28 [18] [18] [18] ;
unsigned int arr_38 [18] [18] ;
signed char arr_57 [18] [18] [18] ;
unsigned long long int arr_22 [24] ;
unsigned int arr_48 [18] [18] [18] [18] [18] ;
int arr_59 [18] [18] [18] ;
unsigned int arr_69 [22] [22] ;
unsigned char arr_70 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 699755681;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)9607;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 2487773227U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (unsigned short)10225;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 1137147986;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (unsigned short)52705;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = -1199627062001826579LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 18127319744610023404ULL : 12019510904287924071ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_38 [i_0] [i_1] = 3674869550U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)59 : (signed char)-120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = 17498332824014597405ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3159027702U : 3134963964U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2109827013 : -237928708;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_69 [i_0] [i_1] = 3106770673U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_70 [i_0] = (unsigned char)15;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_69 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_70 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
