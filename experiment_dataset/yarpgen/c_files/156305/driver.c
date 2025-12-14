#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6191991764791488735LL;
unsigned long long int var_1 = 11368813862487143227ULL;
unsigned char var_2 = (unsigned char)238;
unsigned char var_3 = (unsigned char)184;
signed char var_4 = (signed char)-24;
long long int var_5 = 4896430385367219238LL;
unsigned long long int var_6 = 9592081133100985798ULL;
unsigned long long int var_7 = 7281463864366983496ULL;
signed char var_8 = (signed char)40;
unsigned char var_9 = (unsigned char)6;
unsigned char var_10 = (unsigned char)155;
unsigned char var_11 = (unsigned char)188;
unsigned char var_12 = (unsigned char)204;
unsigned short var_13 = (unsigned short)25024;
unsigned long long int var_14 = 17898448306176340764ULL;
unsigned short var_15 = (unsigned short)31262;
unsigned long long int var_17 = 12977403612137538985ULL;
unsigned long long int var_18 = 4082016705050284409ULL;
int zero = 0;
unsigned long long int var_19 = 6236298469544484040ULL;
unsigned short var_20 = (unsigned short)58535;
long long int var_21 = 8055686860600101449LL;
long long int var_22 = 6937125898793643668LL;
unsigned char var_23 = (unsigned char)40;
unsigned long long int var_24 = 7082636591432128659ULL;
unsigned short var_25 = (unsigned short)65466;
unsigned short var_26 = (unsigned short)23232;
unsigned char var_27 = (unsigned char)42;
long long int var_28 = 3830199350394030365LL;
long long int var_29 = -8807580059857278270LL;
unsigned short var_30 = (unsigned short)3498;
signed char var_31 = (signed char)110;
unsigned long long int var_32 = 16841509047739887974ULL;
unsigned long long int var_33 = 5499813222790096289ULL;
unsigned char var_34 = (unsigned char)137;
unsigned short var_35 = (unsigned short)24885;
unsigned long long int var_36 = 281082800098519762ULL;
unsigned short var_37 = (unsigned short)15479;
unsigned short var_38 = (unsigned short)19723;
unsigned short var_39 = (unsigned short)12254;
unsigned short var_40 = (unsigned short)4214;
unsigned short var_41 = (unsigned short)5466;
unsigned short var_42 = (unsigned short)39569;
unsigned short var_43 = (unsigned short)55457;
unsigned long long int var_44 = 1378294103760236469ULL;
unsigned short var_45 = (unsigned short)8029;
unsigned char arr_1 [12] ;
signed char arr_2 [12] [12] [12] ;
unsigned long long int arr_5 [12] ;
unsigned short arr_7 [12] [12] [12] ;
unsigned long long int arr_10 [12] [12] [12] ;
unsigned long long int arr_16 [12] ;
unsigned short arr_18 [12] ;
unsigned long long int arr_19 [12] [12] [12] [12] ;
unsigned long long int arr_20 [12] [12] [12] ;
long long int arr_32 [12] [12] [12] [12] [12] [12] [12] ;
unsigned short arr_48 [22] [22] ;
long long int arr_49 [22] [22] [22] ;
unsigned short arr_50 [22] [22] [22] ;
long long int arr_6 [12] ;
unsigned long long int arr_11 [12] [12] ;
unsigned short arr_17 [12] ;
unsigned long long int arr_22 [12] [12] [12] [12] [12] [12] [12] ;
signed char arr_33 [12] [12] [12] [12] [12] ;
unsigned long long int arr_36 [12] [12] [12] ;
unsigned long long int arr_37 [12] [12] ;
unsigned char arr_42 [12] ;
unsigned long long int arr_43 [12] [12] ;
long long int arr_52 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)233 : (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)14 : (signed char)-120;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 5172470094298750373ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)63135;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 752975558250167537ULL : 15381071972011523490ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 12831172326707392847ULL : 17390242676139816498ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25590 : (unsigned short)43355;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 2545135939187109985ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 3092683407975388443ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 4095862738014279670LL : 3867074761602938479LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned short)41958;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = -5188131317139471138LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (unsigned short)55423;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -4972221974831359076LL : -3000059341663406845LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 3505155708322324480ULL : 445627466496197207ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15674 : (unsigned short)50660;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 12680634161022650500ULL : 9050851865176223482ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)80 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10718307953725177704ULL : 17391936107706917452ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? 6967785462118133953ULL : 10236134926327093567ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? 9529155881667578957ULL : 3361232933548103424ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = 897170200921454726LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
