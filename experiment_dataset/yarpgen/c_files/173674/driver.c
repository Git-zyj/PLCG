#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
signed char var_1 = (signed char)-60;
unsigned long long int var_2 = 11590618833992066020ULL;
unsigned long long int var_3 = 11792111856339276591ULL;
signed char var_4 = (signed char)-1;
signed char var_5 = (signed char)-89;
unsigned long long int var_6 = 13377267122259450149ULL;
unsigned long long int var_7 = 3935969710479402276ULL;
unsigned long long int var_8 = 15112852463312392538ULL;
signed char var_9 = (signed char)21;
signed char var_10 = (signed char)-4;
signed char var_11 = (signed char)102;
signed char var_12 = (signed char)-74;
signed char var_13 = (signed char)37;
int zero = 0;
unsigned long long int var_14 = 14829838287924653024ULL;
signed char var_15 = (signed char)-70;
signed char var_16 = (signed char)-68;
unsigned long long int var_17 = 11793676393651957715ULL;
signed char var_18 = (signed char)-96;
signed char var_19 = (signed char)19;
signed char var_20 = (signed char)67;
signed char var_21 = (signed char)117;
signed char var_22 = (signed char)-46;
signed char var_23 = (signed char)-98;
signed char var_24 = (signed char)-96;
unsigned long long int var_25 = 8234606041977806723ULL;
signed char var_26 = (signed char)-44;
signed char var_27 = (signed char)2;
signed char var_28 = (signed char)24;
unsigned long long int var_29 = 17482354640394643049ULL;
signed char var_30 = (signed char)52;
signed char var_31 = (signed char)-34;
signed char var_32 = (signed char)-37;
unsigned long long int var_33 = 17535621234891032970ULL;
signed char var_34 = (signed char)28;
unsigned long long int var_35 = 834147725946279054ULL;
signed char var_36 = (signed char)-48;
unsigned long long int var_37 = 8117878118238714278ULL;
unsigned long long int var_38 = 3224307409875294550ULL;
unsigned long long int var_39 = 976496246877704656ULL;
unsigned long long int var_40 = 12621842602578028636ULL;
unsigned long long int var_41 = 10620571560901514966ULL;
signed char arr_0 [23] [23] ;
signed char arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
signed char arr_7 [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] [23] [23] ;
signed char arr_14 [23] [23] ;
unsigned long long int arr_27 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 4282698700853607331ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 16468428516533554406ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13106731191870754551ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 4724296459530678466ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
