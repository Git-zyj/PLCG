#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7862851742402037393ULL;
unsigned int var_1 = 888430678U;
signed char var_2 = (signed char)-24;
signed char var_3 = (signed char)-40;
signed char var_4 = (signed char)17;
unsigned long long int var_6 = 5298543228704685674ULL;
signed char var_7 = (signed char)56;
int var_8 = -306117162;
unsigned int var_9 = 3359646855U;
unsigned int var_10 = 1269270797U;
unsigned int var_11 = 1722989003U;
unsigned long long int var_12 = 18116405602334473696ULL;
int zero = 0;
int var_13 = 559790387;
int var_14 = 1128845548;
unsigned int var_15 = 2199867817U;
unsigned long long int var_16 = 4610973469892223812ULL;
unsigned int var_17 = 3413463262U;
signed char var_18 = (signed char)74;
unsigned int var_19 = 2075827435U;
unsigned long long int var_20 = 18017034607700995246ULL;
unsigned long long int var_21 = 8761740586830196059ULL;
unsigned int var_22 = 3964982028U;
signed char var_23 = (signed char)-16;
unsigned long long int var_24 = 12390794812048338074ULL;
signed char var_25 = (signed char)-65;
signed char var_26 = (signed char)-16;
signed char var_27 = (signed char)-47;
unsigned int var_28 = 2838425673U;
unsigned int var_29 = 588028944U;
signed char var_30 = (signed char)-60;
int var_31 = -884557840;
unsigned int var_32 = 772600736U;
unsigned long long int var_33 = 4598672525718472382ULL;
unsigned long long int var_34 = 17662639516321639861ULL;
int var_35 = 948906268;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 905510214U;
unsigned int var_38 = 2661609355U;
int var_39 = -750831348;
unsigned int var_40 = 352215939U;
unsigned int arr_5 [25] ;
int arr_6 [25] [25] ;
signed char arr_7 [25] ;
signed char arr_10 [21] ;
int arr_11 [21] ;
unsigned int arr_12 [21] [21] [21] ;
unsigned int arr_13 [21] ;
signed char arr_14 [21] [21] ;
int arr_15 [17] ;
int arr_16 [17] ;
_Bool arr_19 [17] [17] [17] ;
int arr_28 [13] ;
unsigned long long int arr_29 [13] ;
unsigned int arr_33 [13] ;
unsigned long long int arr_36 [13] [13] ;
unsigned int arr_41 [13] [13] [13] ;
signed char arr_42 [13] [13] [13] [13] [13] ;
unsigned int arr_8 [25] ;
signed char arr_17 [17] ;
unsigned int arr_22 [17] [17] [17] ;
unsigned long long int arr_25 [17] [17] [17] ;
int arr_26 [17] [17] [17] ;
signed char arr_32 [13] [13] ;
unsigned long long int arr_43 [13] [13] ;
unsigned int arr_48 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2928520637U : 3197554876U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 2110190516;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -1243850880;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1122005701U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3718206277U : 2244637416U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1214906297 : 672373118;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1740897254 : 76922227;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 1313884498;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = 5880928188014959676ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = 1790619608U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? 1657100806242840118ULL : 17865726267372781136ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4107305032U : 573331728U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 800938711U : 1688213755U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)35;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1225193397U : 198605941U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5213809259105489114ULL : 11412671400835567943ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1441323721 : -700351031;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? 11065975372736538342ULL : 6303332555106867508ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 2686262070U : 2414721240U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
