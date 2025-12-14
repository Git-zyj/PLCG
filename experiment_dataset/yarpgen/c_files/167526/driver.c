#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7841741726024043029LL;
unsigned short var_2 = (unsigned short)10734;
unsigned short var_3 = (unsigned short)13150;
unsigned char var_4 = (unsigned char)188;
unsigned short var_5 = (unsigned short)62223;
unsigned short var_6 = (unsigned short)27095;
unsigned short var_8 = (unsigned short)55642;
unsigned short var_9 = (unsigned short)7520;
unsigned char var_10 = (unsigned char)143;
unsigned char var_11 = (unsigned char)0;
unsigned char var_12 = (unsigned char)126;
unsigned short var_13 = (unsigned short)5061;
unsigned short var_15 = (unsigned short)22634;
signed char var_16 = (signed char)71;
unsigned short var_17 = (unsigned short)3053;
int zero = 0;
signed char var_19 = (signed char)34;
unsigned short var_20 = (unsigned short)14812;
signed char var_21 = (signed char)6;
unsigned short var_22 = (unsigned short)43793;
unsigned char var_23 = (unsigned char)34;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)63215;
unsigned short var_26 = (unsigned short)49479;
signed char var_27 = (signed char)-17;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)119;
long long int var_30 = 2066484993383529356LL;
unsigned short var_31 = (unsigned short)55336;
unsigned char var_32 = (unsigned char)111;
unsigned short var_33 = (unsigned short)10860;
unsigned char var_34 = (unsigned char)98;
unsigned char var_35 = (unsigned char)1;
unsigned char var_36 = (unsigned char)205;
unsigned short var_37 = (unsigned short)49785;
unsigned char var_38 = (unsigned char)24;
unsigned char var_39 = (unsigned char)175;
signed char var_40 = (signed char)6;
signed char var_41 = (signed char)78;
long long int var_42 = 994588187583366107LL;
unsigned short var_43 = (unsigned short)26515;
unsigned char var_44 = (unsigned char)100;
unsigned short var_45 = (unsigned short)50763;
signed char var_46 = (signed char)34;
unsigned short var_47 = (unsigned short)59070;
unsigned char var_48 = (unsigned char)31;
unsigned char var_49 = (unsigned char)240;
unsigned char var_50 = (unsigned char)8;
unsigned short var_51 = (unsigned short)23070;
unsigned short var_52 = (unsigned short)15665;
unsigned char var_53 = (unsigned char)171;
unsigned short var_54 = (unsigned short)49430;
unsigned short var_55 = (unsigned short)54991;
unsigned short var_56 = (unsigned short)59244;
unsigned short var_57 = (unsigned short)38185;
unsigned short var_58 = (unsigned short)36253;
unsigned short var_59 = (unsigned short)65363;
unsigned char var_60 = (unsigned char)147;
unsigned short var_61 = (unsigned short)62005;
unsigned short var_62 = (unsigned short)59501;
unsigned char var_63 = (unsigned char)188;
unsigned char var_64 = (unsigned char)135;
unsigned char var_65 = (unsigned char)50;
unsigned char var_66 = (unsigned char)16;
unsigned short var_67 = (unsigned short)26167;
unsigned char var_68 = (unsigned char)164;
unsigned char var_69 = (unsigned char)134;
unsigned char var_70 = (unsigned char)166;
unsigned short var_71 = (unsigned short)19553;
unsigned short var_72 = (unsigned short)3481;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned short arr_2 [22] ;
long long int arr_4 [22] ;
unsigned char arr_7 [22] [22] [22] [22] ;
unsigned short arr_8 [22] [22] [22] ;
long long int arr_9 [22] [22] [22] [22] ;
unsigned short arr_10 [22] [22] [22] ;
unsigned short arr_11 [22] [22] [22] ;
unsigned char arr_12 [22] [22] ;
unsigned short arr_14 [22] ;
unsigned char arr_16 [22] [22] [22] [22] ;
unsigned short arr_17 [22] [22] ;
unsigned short arr_28 [22] [22] [22] [22] [22] [22] ;
signed char arr_30 [22] [22] [22] [22] [22] ;
signed char arr_31 [22] [22] ;
unsigned short arr_34 [22] [22] [22] [22] ;
_Bool arr_37 [22] ;
unsigned short arr_43 [22] [22] [22] [22] ;
unsigned short arr_52 [10] [10] ;
unsigned char arr_56 [10] [10] [10] ;
unsigned short arr_62 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60253 : (unsigned short)20385;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 485915886827500605LL : 6456655400897518045LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)60825 : (unsigned short)3237;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3236588165984206510LL : 8573882384143061113LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)6707;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)43577 : (unsigned short)14857;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)50439;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)11031;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)63725;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (unsigned short)17404;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64845;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_52 [i_0] [i_1] = (unsigned short)50044;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (unsigned short)57757;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
