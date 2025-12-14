#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5787;
signed char var_1 = (signed char)-38;
signed char var_2 = (signed char)85;
unsigned char var_3 = (unsigned char)39;
unsigned int var_4 = 4034868797U;
int var_5 = 2107153878;
unsigned long long int var_6 = 15772956513056923282ULL;
int var_9 = 1529387882;
int zero = 0;
unsigned short var_10 = (unsigned short)21942;
int var_11 = 2135854645;
short var_12 = (short)14434;
short var_13 = (short)21491;
unsigned long long int var_14 = 11896003448173351318ULL;
unsigned long long int var_15 = 12319948693176640966ULL;
signed char var_16 = (signed char)16;
unsigned long long int var_17 = 3861219426448684363ULL;
unsigned char var_18 = (unsigned char)240;
int var_19 = 1504618092;
unsigned char var_20 = (unsigned char)45;
unsigned long long int var_21 = 3314811503602649970ULL;
long long int var_22 = 6962877572947059727LL;
signed char var_23 = (signed char)-94;
int var_24 = -1720999657;
long long int var_25 = 3896534680893174099LL;
short var_26 = (short)-1712;
int var_27 = 1371616929;
signed char var_28 = (signed char)-28;
unsigned char var_29 = (unsigned char)33;
int var_30 = 1498520852;
int var_31 = -826770339;
unsigned int var_32 = 1550054473U;
unsigned char var_33 = (unsigned char)225;
unsigned char var_34 = (unsigned char)118;
int var_35 = 87118255;
unsigned char var_36 = (unsigned char)223;
unsigned char var_37 = (unsigned char)144;
signed char var_38 = (signed char)-68;
short var_39 = (short)11579;
signed char var_40 = (signed char)23;
signed char var_41 = (signed char)-49;
signed char var_42 = (signed char)80;
signed char var_43 = (signed char)65;
short var_44 = (short)-19056;
short var_45 = (short)-29236;
long long int var_46 = 6287382797746354899LL;
signed char arr_0 [24] ;
unsigned short arr_2 [24] [24] ;
unsigned char arr_5 [24] [24] ;
unsigned char arr_7 [24] [24] [24] ;
unsigned long long int arr_8 [24] [24] [24] [24] ;
unsigned char arr_9 [24] ;
signed char arr_10 [24] [24] [24] ;
short arr_13 [24] ;
unsigned short arr_14 [24] [24] [24] [24] ;
unsigned char arr_16 [24] [24] [24] [24] [24] [24] ;
_Bool arr_17 [24] [24] [24] [24] ;
unsigned long long int arr_24 [24] [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_29 [15] ;
short arr_39 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1553 : (unsigned short)10066;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)193 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 13602840093311064730ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (short)-2982;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)24598 : (unsigned short)12473;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 11942263915486888087ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = 9493630382816124657ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)25888 : (short)-7137;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
