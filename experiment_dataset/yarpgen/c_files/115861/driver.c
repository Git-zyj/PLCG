#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1972643476;
unsigned long long int var_1 = 10583299022167455667ULL;
long long int var_2 = 4078730014079344927LL;
unsigned int var_3 = 50368810U;
long long int var_4 = 1854705576037186683LL;
unsigned short var_6 = (unsigned short)6593;
int var_7 = -502864202;
unsigned short var_9 = (unsigned short)1476;
long long int var_10 = 5511392530371007099LL;
unsigned short var_13 = (unsigned short)46614;
_Bool var_14 = (_Bool)0;
int var_15 = -491362643;
unsigned short var_17 = (unsigned short)25241;
int var_18 = 1819581088;
unsigned short var_19 = (unsigned short)45352;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1135485182;
unsigned long long int var_22 = 13773484956588099555ULL;
int var_23 = 1007851131;
unsigned long long int var_24 = 3996408972550885029ULL;
long long int var_25 = 7996936892838434469LL;
unsigned int var_26 = 1038043100U;
unsigned char var_27 = (unsigned char)27;
long long int var_28 = 4455346236255713846LL;
int var_29 = -478436454;
long long int var_30 = 5116664150223236857LL;
unsigned char var_31 = (unsigned char)97;
unsigned short var_32 = (unsigned short)15960;
unsigned short var_33 = (unsigned short)16178;
int var_34 = -1742973554;
signed char var_35 = (signed char)-39;
short var_36 = (short)11863;
unsigned long long int var_37 = 14471809998024319331ULL;
unsigned short var_38 = (unsigned short)48708;
unsigned short var_39 = (unsigned short)13723;
signed char var_40 = (signed char)3;
unsigned short var_41 = (unsigned short)27747;
short var_42 = (short)28995;
int var_43 = 1256291597;
unsigned short var_44 = (unsigned short)20068;
int var_45 = 986210358;
int var_46 = -244520981;
int var_47 = -1143105834;
int var_48 = 1046719286;
unsigned short var_49 = (unsigned short)5065;
_Bool var_50 = (_Bool)1;
unsigned long long int var_51 = 6988777119052423414ULL;
_Bool arr_0 [19] [19] ;
short arr_2 [19] ;
long long int arr_3 [19] ;
unsigned char arr_4 [19] ;
short arr_6 [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
int arr_8 [19] [19] [19] ;
long long int arr_10 [19] [19] ;
unsigned long long int arr_11 [19] ;
long long int arr_12 [19] ;
long long int arr_17 [19] [19] [19] ;
unsigned long long int arr_19 [19] [19] [19] [19] ;
unsigned short arr_20 [19] [19] [19] [19] ;
unsigned short arr_25 [19] [19] [19] [19] ;
unsigned long long int arr_27 [19] [19] [19] [19] [19] [19] ;
signed char arr_29 [19] [19] [19] [19] [19] ;
_Bool arr_5 [19] ;
short arr_13 [19] [19] [19] [19] ;
long long int arr_28 [19] ;
int arr_40 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)20139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -4648898315844529902LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)21555;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 12208739112971972112ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1771792860;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 945000716985776247LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 3746386170949436356ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 4758573708658371082LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 8378308107438831582LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3667745161217569657ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60488;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)42553 : (unsigned short)41840;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11228568839688549846ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)24158 : (short)11738;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 4054576881643656973LL : 3242725120158425306LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_40 [i_0] = -1516530458;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
