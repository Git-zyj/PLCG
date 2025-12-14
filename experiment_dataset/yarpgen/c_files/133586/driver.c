#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3446549628581640258LL;
long long int var_1 = 2761812690370301672LL;
long long int var_2 = 7447317550930599385LL;
signed char var_3 = (signed char)93;
signed char var_4 = (signed char)-5;
long long int var_5 = -8585024456760521434LL;
unsigned long long int var_6 = 9048809211909222476ULL;
unsigned long long int var_7 = 2297126981202371610ULL;
unsigned long long int var_8 = 11503871620278603161ULL;
long long int var_9 = 4244044876972429885LL;
unsigned int var_10 = 1130812255U;
unsigned int var_11 = 3734296165U;
unsigned char var_12 = (unsigned char)132;
int zero = 0;
unsigned char var_13 = (unsigned char)1;
long long int var_14 = -4785078272655368808LL;
signed char var_15 = (signed char)70;
short var_16 = (short)-6779;
long long int var_17 = -7840311217846112984LL;
unsigned long long int var_18 = 5515770812475468558ULL;
unsigned char var_19 = (unsigned char)214;
unsigned long long int var_20 = 24431868603804069ULL;
unsigned int var_21 = 1083768057U;
unsigned long long int var_22 = 15767572116671206209ULL;
unsigned int var_23 = 776786116U;
unsigned short var_24 = (unsigned short)21281;
long long int var_25 = 8370062144435298085LL;
long long int var_26 = 8071106514763450835LL;
unsigned short var_27 = (unsigned short)31959;
unsigned char var_28 = (unsigned char)158;
long long int var_29 = -2252180769082202382LL;
unsigned char arr_0 [13] [13] ;
unsigned int arr_1 [13] [13] ;
unsigned int arr_3 [13] [13] ;
long long int arr_5 [13] ;
unsigned char arr_7 [13] [13] [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
_Bool arr_9 [13] [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] ;
unsigned int arr_11 [13] [13] ;
unsigned char arr_14 [13] [13] [13] ;
unsigned char arr_17 [13] [13] [13] [13] ;
unsigned short arr_22 [13] ;
long long int arr_27 [24] [24] ;
long long int arr_28 [24] [24] [24] ;
long long int arr_31 [18] ;
long long int arr_4 [13] [13] ;
unsigned char arr_12 [13] ;
signed char arr_18 [13] ;
long long int arr_19 [13] ;
short arr_20 [13] [13] [13] ;
unsigned long long int arr_23 [13] ;
unsigned int arr_24 [13] [13] [13] ;
unsigned long long int arr_25 [13] [13] ;
unsigned int arr_33 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 2018252389U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3461182097U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 2316453086209515455LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)2 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13454482644777630452ULL : 14399079301522328669ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 4112337145607942083ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 3221067336U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)80 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)1 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (unsigned short)31596;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = 8641316439014810360LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -8323947750874874672LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = -2341786697423596437LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -6153954365826388045LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 6533028406626680627LL : -2226097026825163444LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-21819 : (short)29257;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = 7408220897673569346ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 3950327571U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = 17562759289456526540ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = 713706628U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
