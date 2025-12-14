#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned char var_1 = (unsigned char)189;
unsigned char var_2 = (unsigned char)36;
unsigned long long int var_3 = 4381870593586172394ULL;
unsigned long long int var_4 = 6744303844526281486ULL;
int var_5 = 1059186180;
unsigned short var_6 = (unsigned short)13274;
unsigned short var_7 = (unsigned short)27608;
int var_8 = -1132492108;
unsigned short var_9 = (unsigned short)54580;
short var_10 = (short)18609;
unsigned int var_11 = 658550968U;
int var_12 = 645630907;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2042436089U;
unsigned int var_15 = 345069250U;
unsigned int var_16 = 1665893711U;
long long int var_17 = -1192351078426686223LL;
short var_18 = (short)27155;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1048260486U;
unsigned int var_21 = 2527729183U;
int var_22 = 1806199574;
signed char var_23 = (signed char)-63;
int var_24 = -211686928;
unsigned int var_25 = 1875350301U;
unsigned short var_26 = (unsigned short)19573;
unsigned short var_27 = (unsigned short)40571;
signed char var_28 = (signed char)61;
unsigned short var_29 = (unsigned short)31617;
int var_30 = 1243293338;
long long int var_31 = 3657580244127334176LL;
unsigned int var_32 = 3067871044U;
unsigned long long int var_33 = 1853983390758157439ULL;
unsigned int var_34 = 3263560349U;
int var_35 = -200126473;
int var_36 = -207355944;
signed char var_37 = (signed char)30;
signed char var_38 = (signed char)-99;
unsigned short var_39 = (unsigned short)62214;
int var_40 = 1838885816;
unsigned long long int var_41 = 11021127539047686931ULL;
_Bool var_42 = (_Bool)1;
unsigned int var_43 = 2727523584U;
unsigned short var_44 = (unsigned short)22534;
signed char var_45 = (signed char)-110;
unsigned short var_46 = (unsigned short)48125;
unsigned long long int var_47 = 17583454588441759296ULL;
unsigned int var_48 = 3073759730U;
unsigned short var_49 = (unsigned short)50938;
unsigned int var_50 = 2646503427U;
short var_51 = (short)24897;
long long int var_52 = -652961944516811597LL;
unsigned short var_53 = (unsigned short)65307;
long long int arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
_Bool arr_4 [17] [17] [17] ;
short arr_5 [17] ;
long long int arr_6 [17] [17] [17] [17] ;
unsigned int arr_8 [17] [17] [17] [17] ;
long long int arr_9 [17] [17] [17] [17] [17] ;
unsigned int arr_11 [23] ;
signed char arr_12 [23] ;
long long int arr_13 [23] ;
_Bool arr_14 [24] [24] ;
unsigned short arr_15 [24] ;
unsigned int arr_16 [24] [24] ;
unsigned short arr_17 [24] ;
unsigned int arr_21 [14] [14] ;
unsigned int arr_23 [14] [14] ;
unsigned short arr_26 [14] ;
unsigned int arr_27 [14] [14] [14] ;
unsigned long long int arr_46 [10] [10] [10] [10] ;
signed char arr_53 [22] [22] ;
unsigned long long int arr_55 [22] [22] [22] ;
long long int arr_56 [22] [22] ;
unsigned int arr_57 [22] ;
unsigned short arr_59 [22] [22] ;
_Bool arr_60 [22] [22] [22] [22] [22] [22] ;
signed char arr_61 [22] [22] [22] [22] ;
int arr_62 [22] [22] [22] [22] ;
long long int arr_63 [22] [22] [22] [22] [22] [22] ;
_Bool arr_65 [22] [22] [22] ;
unsigned char arr_71 [22] [22] [22] ;
long long int arr_72 [22] [22] [22] ;
int arr_74 [22] [22] [22] [22] [22] ;
unsigned short arr_2 [17] ;
int arr_10 [17] ;
unsigned char arr_18 [24] [24] ;
unsigned int arr_19 [24] [24] ;
long long int arr_25 [14] ;
unsigned short arr_28 [14] ;
unsigned char arr_33 [14] [14] ;
unsigned int arr_34 [14] [14] [14] [14] ;
signed char arr_35 [14] ;
unsigned long long int arr_38 [19] ;
signed char arr_48 [10] [10] [10] [10] ;
unsigned short arr_49 [10] [10] [10] [10] ;
unsigned int arr_52 [22] [22] ;
unsigned int arr_69 [22] [22] [22] [22] ;
signed char arr_79 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_80 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 6055846248992224065LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 17555973003697278449ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-571;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -9053978596416171557LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 147778828U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 8770764503010869347LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 2367735695U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 3973078239726989646LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)52192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = 2109889974U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (unsigned short)15936;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = 1683485091U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 2055468344U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (unsigned short)64414;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 3773724617U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 11690887597736444241ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_53 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = 5116388091467695814ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_56 [i_0] [i_1] = -6725889439126405704LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_57 [i_0] = 1680061878U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_59 [i_0] [i_1] = (unsigned short)31031;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = 1235456012;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 678435284839453756LL : -1787799370291969746LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_71 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = -7411740749534331049LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = 1765621957;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)25005;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1795784462;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = 2774949118U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = -3340582537601834647LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (unsigned short)16033;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1619300860U : 315134627U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 11283934815274302749ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62073;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_52 [i_0] [i_1] = 1878860721U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_69 [i_0] [i_1] [i_2] [i_3] = 1338852573U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)54767;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
