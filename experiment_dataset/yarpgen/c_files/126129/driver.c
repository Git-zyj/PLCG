#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13099707720010052073ULL;
unsigned int var_1 = 356986809U;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 2676294357U;
unsigned short var_6 = (unsigned short)38093;
unsigned char var_7 = (unsigned char)38;
unsigned int var_8 = 528363599U;
long long int var_9 = -907145557028838553LL;
unsigned short var_10 = (unsigned short)51611;
short var_11 = (short)3260;
unsigned int var_12 = 2452557032U;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned short var_15 = (unsigned short)2270;
unsigned long long int var_16 = 14373418944039635866ULL;
short var_17 = (short)16496;
_Bool var_18 = (_Bool)0;
short var_19 = (short)17964;
unsigned int var_20 = 2625371952U;
unsigned short var_21 = (unsigned short)60591;
unsigned long long int var_22 = 13364156180683791179ULL;
unsigned char var_23 = (unsigned char)84;
unsigned char var_24 = (unsigned char)170;
signed char var_25 = (signed char)-15;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)104;
int var_29 = 1371591747;
int var_30 = -2056115800;
unsigned char var_31 = (unsigned char)180;
unsigned short var_32 = (unsigned short)61454;
unsigned char var_33 = (unsigned char)253;
unsigned long long int var_34 = 15083340241617806388ULL;
unsigned char var_35 = (unsigned char)92;
int var_36 = -1630032494;
unsigned long long int var_37 = 16336382796092859547ULL;
signed char var_38 = (signed char)120;
unsigned long long int var_39 = 379110821305308131ULL;
_Bool var_40 = (_Bool)0;
signed char var_41 = (signed char)-26;
_Bool var_42 = (_Bool)0;
unsigned int var_43 = 2114175404U;
long long int var_44 = 1925285544268341136LL;
long long int var_45 = -7713731527369272074LL;
unsigned int var_46 = 346053737U;
signed char var_47 = (signed char)13;
unsigned short var_48 = (unsigned short)61394;
long long int var_49 = -8285030010265121332LL;
unsigned int var_50 = 1108715035U;
long long int var_51 = -3051944677386231865LL;
int var_52 = -231483628;
long long int var_53 = -5948375894616342731LL;
_Bool arr_0 [23] ;
int arr_1 [23] ;
int arr_2 [23] ;
signed char arr_3 [23] ;
signed char arr_4 [20] ;
unsigned int arr_5 [20] [20] ;
signed char arr_6 [18] ;
_Bool arr_7 [18] ;
long long int arr_8 [18] ;
long long int arr_9 [18] ;
_Bool arr_10 [18] [18] ;
long long int arr_11 [18] [18] [18] ;
int arr_12 [18] ;
unsigned int arr_13 [18] [18] ;
signed char arr_14 [18] [18] [18] [18] ;
short arr_16 [18] [18] [18] ;
long long int arr_17 [18] [18] [18] [18] ;
long long int arr_18 [18] [18] [18] [18] [18] [18] [18] ;
unsigned int arr_20 [18] [18] [18] [18] [18] [18] ;
_Bool arr_22 [18] [18] ;
signed char arr_23 [18] [18] [18] [18] ;
signed char arr_25 [18] [18] [18] [18] [18] [18] ;
short arr_26 [18] [18] [18] [18] ;
int arr_28 [18] [18] [18] [18] ;
unsigned int arr_31 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -2132279439;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1706628220;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 1551174583U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -8726083889054272305LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -5548405532462482506LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 129112822820568655LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -2073401199;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 3552103993U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-28144;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3959543468038805032LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6938799786467175926LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3498662709U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)16283 : (short)-2234;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -792956604;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = 1443027809U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
