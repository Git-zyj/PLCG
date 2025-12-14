#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54416;
unsigned char var_1 = (unsigned char)216;
unsigned int var_2 = 3823504090U;
unsigned int var_3 = 2067629346U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-102;
signed char var_7 = (signed char)34;
unsigned short var_8 = (unsigned short)40581;
unsigned char var_9 = (unsigned char)15;
unsigned long long int var_10 = 3129431049767304777ULL;
short var_11 = (short)137;
unsigned int var_12 = 404130753U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3311974357U;
int zero = 0;
unsigned char var_16 = (unsigned char)181;
long long int var_17 = -1623578843581982507LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1545212565U;
short var_20 = (short)-17847;
int var_21 = 568696623;
short var_22 = (short)-13941;
short var_23 = (short)6513;
unsigned int var_24 = 2203795650U;
unsigned int var_25 = 2619943653U;
int var_26 = -1809168683;
signed char var_27 = (signed char)-33;
unsigned int var_28 = 2322005079U;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 9980442734284010937ULL;
int var_31 = 1257594491;
unsigned int var_32 = 3630922977U;
unsigned char var_33 = (unsigned char)193;
short var_34 = (short)-14121;
short var_35 = (short)18710;
unsigned char var_36 = (unsigned char)119;
signed char var_37 = (signed char)81;
long long int var_38 = -8876607235247788423LL;
unsigned char var_39 = (unsigned char)102;
unsigned long long int var_40 = 18036826937637412954ULL;
unsigned long long int var_41 = 4652748052224163079ULL;
unsigned int var_42 = 191289239U;
unsigned int var_43 = 1613973843U;
short var_44 = (short)8744;
short var_45 = (short)14531;
unsigned long long int var_46 = 4562947396145461740ULL;
int var_47 = -565693332;
short var_48 = (short)-1617;
short var_49 = (short)-26197;
unsigned long long int var_50 = 8737412415459370172ULL;
short var_51 = (short)-15406;
int var_52 = 127001421;
unsigned long long int var_53 = 12985083917350948256ULL;
unsigned long long int var_54 = 3382702604581970088ULL;
unsigned long long int var_55 = 11421111256819942929ULL;
unsigned int var_56 = 3140428950U;
signed char var_57 = (signed char)-102;
unsigned char var_58 = (unsigned char)210;
unsigned int var_59 = 140161756U;
unsigned int arr_0 [24] [24] ;
_Bool arr_2 [24] [24] ;
unsigned int arr_4 [24] [24] ;
_Bool arr_5 [24] ;
int arr_6 [24] ;
unsigned long long int arr_7 [24] [24] ;
unsigned long long int arr_8 [24] [24] ;
unsigned char arr_9 [24] [24] [24] ;
short arr_10 [24] [24] [24] [24] ;
_Bool arr_12 [24] [24] ;
unsigned long long int arr_13 [24] [24] ;
_Bool arr_19 [24] [24] [24] [24] ;
short arr_24 [24] [24] [24] [24] [24] [24] [24] ;
short arr_26 [24] [24] [24] [24] [24] [24] ;
short arr_31 [24] [24] [24] [24] ;
unsigned long long int arr_34 [24] [24] [24] [24] [24] [24] ;
short arr_36 [24] [24] [24] ;
unsigned char arr_41 [12] [12] ;
short arr_42 [12] ;
unsigned long long int arr_43 [12] [12] ;
signed char arr_44 [12] [12] [12] ;
short arr_52 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3602922102U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 2690251501U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1952089930;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 10649516569329020360ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 9332264552045928236ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)196 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-28048 : (short)558;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 10160242311299215448ULL : 787332665982501406ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)28103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)6152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)10509 : (short)-8964;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3119225284246026401ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)20328 : (short)-17332;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_42 [i_0] = (short)-291;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_43 [i_0] [i_1] = 2901744558189733451ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-76 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-27388;
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
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
