#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14922282001668916503ULL;
unsigned short var_1 = (unsigned short)6275;
unsigned short var_4 = (unsigned short)56503;
unsigned char var_5 = (unsigned char)83;
unsigned long long int var_6 = 12642847466000067767ULL;
unsigned short var_12 = (unsigned short)2553;
unsigned short var_13 = (unsigned short)49749;
unsigned long long int var_14 = 10625790893696167966ULL;
unsigned short var_16 = (unsigned short)22143;
int zero = 0;
unsigned long long int var_17 = 4218214540923167359ULL;
unsigned char var_18 = (unsigned char)182;
unsigned char var_19 = (unsigned char)189;
unsigned char var_20 = (unsigned char)37;
unsigned long long int var_21 = 17054189762734470328ULL;
unsigned int var_22 = 3661375903U;
unsigned long long int var_23 = 6775214896206741488ULL;
unsigned char var_24 = (unsigned char)67;
unsigned long long int var_25 = 3203022223107867016ULL;
unsigned int var_26 = 2581581664U;
unsigned short var_27 = (unsigned short)59638;
unsigned long long int var_28 = 15086939922985587438ULL;
unsigned char var_29 = (unsigned char)179;
signed char var_30 = (signed char)85;
unsigned long long int var_31 = 6063232850578177038ULL;
unsigned char var_32 = (unsigned char)5;
unsigned long long int var_33 = 16746519810738184059ULL;
unsigned long long int var_34 = 912012954160578335ULL;
unsigned char var_35 = (unsigned char)237;
unsigned long long int var_36 = 11073243360888248108ULL;
unsigned char var_37 = (unsigned char)135;
unsigned char var_38 = (unsigned char)141;
unsigned int var_39 = 797550232U;
signed char var_40 = (signed char)-27;
unsigned long long int var_41 = 11436016047389809247ULL;
unsigned int var_42 = 1341964509U;
unsigned int var_43 = 2265805238U;
signed char var_44 = (signed char)17;
signed char var_45 = (signed char)-44;
unsigned long long int arr_4 [25] [25] [25] ;
unsigned long long int arr_6 [25] ;
unsigned char arr_8 [25] [25] [25] [25] ;
unsigned int arr_12 [25] [25] [25] [25] ;
unsigned short arr_15 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_21 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_22 [25] [25] [25] [25] [25] ;
unsigned int arr_24 [25] [25] [25] [25] [25] ;
unsigned char arr_27 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13080597469875938349ULL : 15952864232287381442ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3069762639895794258ULL : 8167197330942374540ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 349688690U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)27897;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)11240;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2446223363U : 44536928U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3094692996U : 1277118841U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)55;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
