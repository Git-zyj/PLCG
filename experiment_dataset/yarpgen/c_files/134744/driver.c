#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned char var_1 = (unsigned char)54;
unsigned char var_2 = (unsigned char)175;
unsigned int var_3 = 2620448385U;
unsigned char var_4 = (unsigned char)36;
unsigned char var_5 = (unsigned char)160;
long long int var_6 = -4201966544507337204LL;
int var_7 = -931133971;
unsigned char var_8 = (unsigned char)170;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 4346685622735109776ULL;
signed char var_11 = (signed char)111;
short var_12 = (short)10569;
signed char var_13 = (signed char)-36;
unsigned int var_14 = 1656363418U;
unsigned int var_15 = 3537966275U;
unsigned short var_16 = (unsigned short)20695;
unsigned int var_17 = 493930495U;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-111;
unsigned short var_21 = (unsigned short)29508;
unsigned short var_22 = (unsigned short)17297;
unsigned int var_23 = 1180074216U;
unsigned long long int var_24 = 16920516467688649979ULL;
int var_25 = -1339258280;
unsigned long long int var_26 = 3002801852902974817ULL;
int var_27 = 731719805;
signed char var_28 = (signed char)-56;
long long int var_29 = 7118226637085503046LL;
unsigned char var_30 = (unsigned char)96;
unsigned int var_31 = 419234163U;
unsigned char var_32 = (unsigned char)129;
int var_33 = -736055521;
unsigned long long int var_34 = 6760610712775880654ULL;
short var_35 = (short)-19067;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)41065;
unsigned int var_39 = 2325523037U;
long long int var_40 = -3449506854971539417LL;
long long int var_41 = -8403344857962186385LL;
unsigned char var_42 = (unsigned char)181;
unsigned long long int var_43 = 12811089822843694110ULL;
unsigned int var_44 = 344008729U;
unsigned long long int var_45 = 10629414794566872173ULL;
unsigned short var_46 = (unsigned short)18493;
long long int var_47 = 8554900513076521267LL;
signed char var_48 = (signed char)83;
short var_49 = (short)7118;
signed char var_50 = (signed char)18;
signed char var_51 = (signed char)95;
_Bool var_52 = (_Bool)1;
signed char var_53 = (signed char)-43;
signed char var_54 = (signed char)-116;
int var_55 = -153892767;
short var_56 = (short)-9926;
unsigned char var_57 = (unsigned char)90;
unsigned int var_58 = 2929991222U;
unsigned char var_59 = (unsigned char)68;
_Bool var_60 = (_Bool)0;
_Bool var_61 = (_Bool)1;
unsigned int var_62 = 1378809778U;
int var_63 = -1556692871;
long long int var_64 = 8120041927856839296LL;
int var_65 = 237864105;
long long int var_66 = 3810810548402025725LL;
_Bool var_67 = (_Bool)0;
unsigned char var_68 = (unsigned char)17;
unsigned int var_69 = 23063851U;
unsigned short var_70 = (unsigned short)34135;
unsigned char var_71 = (unsigned char)245;
short var_72 = (short)-10437;
_Bool var_73 = (_Bool)1;
int var_74 = 1384561280;
short var_75 = (short)-3653;
int var_76 = -1742344247;
long long int var_77 = 6598383443669636931LL;
short var_78 = (short)22200;
unsigned long long int var_79 = 10096241045370756714ULL;
int var_80 = 541431611;
unsigned char var_81 = (unsigned char)226;
unsigned long long int arr_1 [12] ;
long long int arr_2 [12] ;
unsigned long long int arr_3 [12] [12] [12] ;
int arr_4 [12] ;
_Bool arr_5 [12] [12] ;
unsigned short arr_8 [12] ;
unsigned int arr_12 [12] [12] [12] [12] ;
long long int arr_14 [12] [12] [12] [12] ;
unsigned char arr_18 [12] [12] [12] [12] ;
_Bool arr_19 [12] [12] [12] [12] [12] [12] ;
long long int arr_20 [12] [12] [12] [12] [12] ;
long long int arr_21 [12] ;
unsigned char arr_22 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_23 [12] [12] [12] [12] ;
unsigned short arr_25 [12] [12] ;
short arr_29 [12] [12] [12] [12] ;
signed char arr_31 [12] ;
signed char arr_33 [12] [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_34 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_36 [12] ;
unsigned int arr_39 [12] ;
_Bool arr_43 [12] [12] [12] [12] ;
unsigned long long int arr_47 [12] [12] [12] [12] [12] ;
signed char arr_52 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7757325492126748785ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 6069123972862491908LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17502693427338534717ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1389730564;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)34008;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 601532227U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -3776648496809272948LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 1652403418111278332LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 5536722714832906722LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 2345087102U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)12814;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (short)28115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_31 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 426968212859799644ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_39 [i_0] = 2893935182U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 11742559316709505137ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)58;
}

void checksum() {
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
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
