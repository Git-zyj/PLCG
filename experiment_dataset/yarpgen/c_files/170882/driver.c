#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 548201307U;
signed char var_4 = (signed char)-22;
signed char var_5 = (signed char)62;
unsigned long long int var_6 = 5765533624805845333ULL;
unsigned long long int var_7 = 2429469537434301978ULL;
unsigned long long int var_8 = 11280816104553330826ULL;
signed char var_10 = (signed char)-118;
long long int var_12 = 2614999895327839485LL;
unsigned int var_14 = 3635643385U;
signed char var_15 = (signed char)54;
unsigned char var_16 = (unsigned char)174;
unsigned short var_17 = (unsigned short)40564;
long long int var_18 = -3388480593306191951LL;
int zero = 0;
unsigned int var_19 = 1609356496U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 449690719U;
unsigned char var_22 = (unsigned char)52;
unsigned short var_23 = (unsigned short)17972;
unsigned char var_24 = (unsigned char)102;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-14620;
unsigned char var_27 = (unsigned char)232;
unsigned short var_28 = (unsigned short)38600;
unsigned long long int var_29 = 18233912559297066896ULL;
int var_30 = -1094316250;
unsigned long long int var_31 = 4890343770026392943ULL;
long long int var_32 = 4352121905146259174LL;
unsigned char var_33 = (unsigned char)152;
unsigned short var_34 = (unsigned short)42654;
unsigned short var_35 = (unsigned short)23597;
unsigned long long int var_36 = 481215476176557575ULL;
unsigned long long int var_37 = 18417399318489198081ULL;
unsigned long long int var_38 = 7218502276926760779ULL;
unsigned short var_39 = (unsigned short)15931;
signed char var_40 = (signed char)-64;
short var_41 = (short)22738;
unsigned short var_42 = (unsigned short)56846;
signed char var_43 = (signed char)-85;
long long int var_44 = 739894422178125985LL;
unsigned char var_45 = (unsigned char)157;
_Bool var_46 = (_Bool)0;
unsigned short var_47 = (unsigned short)62759;
unsigned char var_48 = (unsigned char)151;
unsigned short var_49 = (unsigned short)32920;
long long int var_50 = 5602463925222772211LL;
unsigned short var_51 = (unsigned short)45606;
unsigned char var_52 = (unsigned char)162;
unsigned char var_53 = (unsigned char)7;
unsigned short var_54 = (unsigned short)6623;
unsigned int var_55 = 3755400170U;
unsigned short var_56 = (unsigned short)29516;
unsigned char var_57 = (unsigned char)0;
long long int var_58 = 6124524570261336636LL;
short var_59 = (short)-31861;
unsigned int var_60 = 2606357783U;
long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
long long int arr_3 [10] [10] ;
unsigned short arr_4 [10] [10] [10] ;
unsigned char arr_6 [10] [10] ;
unsigned char arr_7 [10] [10] ;
unsigned short arr_8 [10] ;
unsigned int arr_9 [10] [10] [10] [10] ;
signed char arr_11 [10] [10] ;
unsigned long long int arr_12 [10] [10] [10] [10] ;
unsigned int arr_14 [10] [10] [10] [10] ;
long long int arr_17 [10] ;
unsigned char arr_21 [10] [10] [10] [10] ;
unsigned long long int arr_22 [10] [10] [10] ;
unsigned char arr_27 [25] [25] [25] ;
unsigned long long int arr_29 [25] [25] [25] [25] ;
unsigned short arr_30 [25] ;
signed char arr_34 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_35 [25] [25] [25] [25] [25] ;
unsigned int arr_36 [25] [25] [25] [25] [25] [25] ;
signed char arr_38 [25] [25] [25] [25] ;
int arr_41 [25] [25] [25] [25] ;
unsigned char arr_42 [25] [25] [25] [25] ;
unsigned int arr_44 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1575777040082712474LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 610032230U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -807926983874575345LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)58913;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)21793;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1307658023U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 14311075446074545455ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 196725953U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = -5137545765346825596LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)241 : (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 15546558687149374856ULL : 8685583413414669658ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 17978177006035707059ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (unsigned short)48072;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)60344;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 598407237U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 2106909089;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_44 [i_0] [i_1] = 4192166889U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
