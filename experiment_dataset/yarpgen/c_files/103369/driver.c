#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -153590999388164681LL;
unsigned char var_1 = (unsigned char)60;
unsigned char var_2 = (unsigned char)249;
int var_4 = -1645426478;
signed char var_5 = (signed char)-71;
signed char var_6 = (signed char)40;
long long int var_7 = 3971881724364496074LL;
unsigned int var_8 = 4292606581U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 14652020392502009153ULL;
signed char var_11 = (signed char)-61;
unsigned int var_12 = 2290812022U;
unsigned long long int var_13 = 1896584978192711815ULL;
unsigned char var_14 = (unsigned char)237;
short var_15 = (short)-20686;
unsigned long long int var_16 = 951217404579424741ULL;
unsigned short var_18 = (unsigned short)12604;
int zero = 0;
unsigned long long int var_19 = 8376145128551503537ULL;
unsigned short var_20 = (unsigned short)42345;
unsigned int var_21 = 3222332579U;
signed char var_22 = (signed char)-2;
int var_23 = -1406157084;
signed char var_24 = (signed char)-123;
unsigned int var_25 = 1141903607U;
short var_26 = (short)27577;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 12731841462139098258ULL;
long long int var_29 = -580584151605162358LL;
unsigned long long int var_30 = 8643137554082761292ULL;
int var_31 = 1463639028;
unsigned int var_32 = 2271200498U;
signed char var_33 = (signed char)49;
unsigned char var_34 = (unsigned char)89;
unsigned int var_35 = 2652844658U;
int var_36 = 671174532;
long long int var_37 = -4371240246560904211LL;
_Bool var_38 = (_Bool)1;
signed char var_39 = (signed char)119;
_Bool var_40 = (_Bool)0;
_Bool var_41 = (_Bool)1;
_Bool var_42 = (_Bool)1;
long long int var_43 = 6344436436760038050LL;
long long int var_44 = -140515530058916403LL;
long long int var_45 = 109303463244062691LL;
signed char var_46 = (signed char)101;
signed char var_47 = (signed char)-9;
_Bool var_48 = (_Bool)0;
short var_49 = (short)22873;
int var_50 = 963788966;
signed char var_51 = (signed char)-23;
short var_52 = (short)-24383;
unsigned long long int var_53 = 3412089091964058631ULL;
_Bool var_54 = (_Bool)0;
long long int var_55 = 1587553503486230742LL;
unsigned short var_56 = (unsigned short)46582;
signed char var_57 = (signed char)-13;
unsigned long long int var_58 = 5732317933613793633ULL;
long long int var_59 = -6896371347480521839LL;
unsigned int var_60 = 1968517906U;
int var_61 = -1825737113;
long long int arr_10 [11] [11] [11] [11] ;
long long int arr_11 [14] [14] ;
_Bool arr_12 [14] ;
unsigned char arr_15 [14] [14] ;
unsigned short arr_18 [14] ;
unsigned long long int arr_20 [14] [14] [14] ;
signed char arr_21 [14] ;
short arr_22 [14] [14] [14] [14] [14] ;
_Bool arr_23 [12] [12] ;
_Bool arr_25 [12] ;
unsigned int arr_29 [12] [12] [12] ;
unsigned char arr_31 [12] ;
_Bool arr_33 [12] [12] [12] [12] ;
short arr_35 [12] [12] [12] [12] ;
_Bool arr_36 [12] [12] [12] [12] [12] [12] ;
long long int arr_37 [12] [12] [12] [12] [12] ;
short arr_41 [12] [12] [12] [12] [12] ;
signed char arr_42 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_49 [12] [12] [12] [12] [12] ;
signed char arr_50 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2888562072787042701LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = -2131024491345513973LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)196 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1202 : (unsigned short)63763;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 15119634136306346095ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-4795 : (short)20969;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 1460722082U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned char)41 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)13690 : (short)-15811;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -538994797880133404LL : -7927231872662279231LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-14216;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)37658;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (signed char)66;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
