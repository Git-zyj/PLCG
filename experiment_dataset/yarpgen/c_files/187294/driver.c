#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19554;
short var_1 = (short)4529;
short var_2 = (short)-22778;
unsigned int var_3 = 3686854697U;
short var_4 = (short)-26713;
unsigned char var_5 = (unsigned char)151;
long long int var_6 = -4173081424025507241LL;
unsigned long long int var_7 = 885547220910281286ULL;
unsigned short var_8 = (unsigned short)35986;
int var_9 = 926816351;
unsigned short var_10 = (unsigned short)5168;
unsigned short var_11 = (unsigned short)8593;
short var_12 = (short)-17402;
unsigned short var_13 = (unsigned short)15994;
int zero = 0;
unsigned long long int var_14 = 13382414167462031418ULL;
short var_15 = (short)6268;
signed char var_16 = (signed char)-109;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6056801112757401291ULL;
unsigned short var_19 = (unsigned short)39923;
long long int var_20 = 3467192124784214905LL;
unsigned long long int var_21 = 6593252846148666532ULL;
short var_22 = (short)-29633;
signed char var_23 = (signed char)97;
long long int var_24 = 1573674093983475361LL;
signed char var_25 = (signed char)-111;
signed char var_26 = (signed char)-116;
unsigned long long int var_27 = 17946623839667688906ULL;
unsigned short var_28 = (unsigned short)6588;
long long int var_29 = -6168931352404946413LL;
unsigned long long int var_30 = 10799400481423798648ULL;
long long int var_31 = -4855024445823962974LL;
int var_32 = 1207461414;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 1930397289U;
signed char var_35 = (signed char)-47;
signed char var_36 = (signed char)-13;
unsigned short var_37 = (unsigned short)24335;
signed char var_38 = (signed char)-105;
unsigned short arr_0 [14] [14] ;
short arr_1 [14] ;
signed char arr_2 [22] ;
signed char arr_3 [22] ;
long long int arr_4 [22] ;
unsigned int arr_5 [22] [22] ;
long long int arr_6 [22] [22] ;
long long int arr_9 [22] [22] ;
short arr_10 [22] [22] [22] [22] ;
long long int arr_11 [22] [22] [22] [22] ;
unsigned long long int arr_12 [22] [22] ;
short arr_13 [22] [22] [22] [22] [22] [22] ;
signed char arr_15 [22] [22] [22] [22] [22] ;
signed char arr_18 [22] ;
unsigned long long int arr_19 [22] [22] [22] ;
unsigned int arr_21 [22] [22] ;
unsigned short arr_22 [22] [22] [22] ;
signed char arr_25 [22] [22] ;
short arr_26 [22] ;
unsigned int arr_27 [22] [22] ;
long long int arr_8 [22] [22] ;
_Bool arr_31 [22] ;
unsigned short arr_32 [22] ;
unsigned short arr_35 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)19051;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-19860 : (short)23877;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -4159222103358389658LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 488146642U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 3703922079230965383LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 4311127184289311779LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-21210 : (short)2875;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -5478861964617649493LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 3256401488491272051ULL : 8872310079236965205ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)23977;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 9196682721310321385ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = 1668545206U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)38585 : (unsigned short)24065;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)-25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (short)9946;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = 2554776663U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 5729010025831002037LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (unsigned short)38562;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned short)15278;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
