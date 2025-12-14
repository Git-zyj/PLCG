#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3435071846204713268ULL;
unsigned short var_1 = (unsigned short)40779;
unsigned char var_3 = (unsigned char)40;
short var_4 = (short)21144;
unsigned short var_5 = (unsigned short)31225;
unsigned long long int var_7 = 16409612642003135199ULL;
signed char var_8 = (signed char)-8;
short var_9 = (short)-12909;
unsigned char var_10 = (unsigned char)152;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)101;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)35;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-40;
int zero = 0;
signed char var_19 = (signed char)108;
signed char var_20 = (signed char)26;
unsigned long long int var_21 = 8143190850874986156ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7566458167408174578ULL;
signed char var_25 = (signed char)63;
short var_26 = (short)-23311;
_Bool var_27 = (_Bool)0;
short var_28 = (short)23665;
unsigned char var_29 = (unsigned char)72;
signed char var_30 = (signed char)-89;
short var_31 = (short)-9166;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)28;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 9407235875924236718ULL;
signed char var_37 = (signed char)-115;
short var_38 = (short)5179;
unsigned long long int var_39 = 12186158419218403587ULL;
unsigned short var_40 = (unsigned short)36344;
short var_41 = (short)10738;
unsigned long long int var_42 = 12666273790793845445ULL;
unsigned long long int var_43 = 9697217030703251464ULL;
unsigned char var_44 = (unsigned char)47;
unsigned short var_45 = (unsigned short)61972;
signed char var_46 = (signed char)61;
unsigned long long int var_47 = 12258682043341119285ULL;
_Bool var_48 = (_Bool)0;
signed char var_49 = (signed char)7;
short var_50 = (short)-28844;
short var_51 = (short)10180;
signed char var_52 = (signed char)-23;
signed char var_53 = (signed char)89;
signed char var_54 = (signed char)-98;
unsigned short var_55 = (unsigned short)1883;
int var_56 = -506522362;
signed char var_57 = (signed char)75;
int var_58 = -477682752;
int var_59 = -1033981894;
int var_60 = 410912819;
signed char var_61 = (signed char)126;
int var_62 = 1515036726;
_Bool var_63 = (_Bool)0;
unsigned short var_64 = (unsigned short)174;
signed char var_65 = (signed char)119;
unsigned long long int var_66 = 7937876787216552290ULL;
short var_67 = (short)13405;
_Bool var_68 = (_Bool)1;
unsigned long long int var_69 = 5806449671846493048ULL;
unsigned short var_70 = (unsigned short)17260;
_Bool var_71 = (_Bool)0;
signed char arr_1 [22] ;
unsigned short arr_2 [22] ;
short arr_3 [22] ;
_Bool arr_4 [22] [22] [22] ;
unsigned short arr_6 [22] [22] ;
signed char arr_7 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
unsigned short arr_10 [22] ;
_Bool arr_11 [22] [22] [22] [22] ;
unsigned long long int arr_13 [22] ;
short arr_14 [22] ;
unsigned char arr_15 [22] [22] [22] [22] ;
signed char arr_16 [22] [22] [22] [22] [22] ;
signed char arr_18 [22] [22] [22] ;
short arr_20 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_21 [22] ;
signed char arr_24 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_25 [22] [22] [22] [22] [22] ;
unsigned short arr_26 [22] ;
unsigned int arr_27 [22] [22] [22] [22] ;
signed char arr_28 [22] [22] [22] [22] ;
unsigned short arr_35 [22] ;
unsigned long long int arr_36 [22] [22] [22] [22] ;
_Bool arr_39 [22] [22] [22] ;
unsigned char arr_49 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)54079;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)25199;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)63696;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)68 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)664 : (unsigned short)15674;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 12165967941704941284ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (short)-7536;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)22160;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)-2 : (signed char)-68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (unsigned short)36969;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3737364341U : 942277131U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-98 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = (unsigned short)22032;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11546027026351450452ULL : 11829399823559410681ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)212;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
