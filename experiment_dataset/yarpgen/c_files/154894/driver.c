#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)92;
unsigned int var_2 = 3269146798U;
signed char var_3 = (signed char)2;
long long int var_4 = -3669581280836086230LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)3;
int var_7 = -1670009301;
long long int var_8 = -7638324020250012102LL;
unsigned char var_9 = (unsigned char)3;
unsigned char var_10 = (unsigned char)238;
short var_11 = (short)-14027;
int zero = 0;
signed char var_12 = (signed char)-53;
unsigned long long int var_13 = 9327925194194492681ULL;
unsigned int var_14 = 1443718856U;
signed char var_15 = (signed char)95;
unsigned long long int var_16 = 10863002893083836778ULL;
signed char var_17 = (signed char)113;
signed char var_18 = (signed char)-89;
int var_19 = -2049962285;
short var_20 = (short)-534;
long long int var_21 = -7364520749145069109LL;
short var_22 = (short)-7500;
short var_23 = (short)14126;
signed char var_24 = (signed char)-52;
int var_25 = -703655698;
unsigned int var_26 = 3743536064U;
unsigned long long int var_27 = 6015258650096617384ULL;
unsigned int arr_0 [14] ;
unsigned int arr_1 [14] [14] ;
long long int arr_2 [14] [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
_Bool arr_6 [14] [14] [14] ;
long long int arr_7 [14] [14] [14] ;
unsigned short arr_8 [14] [14] [14] ;
unsigned short arr_10 [14] [14] ;
long long int arr_12 [14] [14] [14] [14] [14] [14] ;
int arr_13 [14] [14] [14] [14] ;
unsigned char arr_15 [14] ;
short arr_16 [14] ;
signed char arr_17 [14] [14] ;
long long int arr_22 [10] ;
long long int arr_23 [10] ;
unsigned int arr_24 [10] ;
unsigned short arr_25 [14] ;
unsigned long long int arr_27 [14] ;
int arr_29 [14] ;
unsigned int arr_33 [23] ;
unsigned int arr_34 [23] [23] ;
int arr_35 [13] [13] ;
unsigned char arr_36 [13] ;
unsigned int arr_38 [22] [22] ;
signed char arr_3 [14] [14] ;
long long int arr_9 [14] ;
unsigned long long int arr_18 [14] [14] [14] [14] [14] ;
signed char arr_19 [14] [14] [14] [14] [14] ;
_Bool arr_20 [14] ;
short arr_32 [14] [14] [14] [14] ;
long long int arr_37 [13] ;
unsigned int arr_41 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 4052566157U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2327145498U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -1286278677834906990LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3249431406U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 10771337071345541414ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7137985442195456174LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)17018;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)2047;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3018423028298679270LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 468597206;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (short)-1069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = 8669361066067746320LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = -5825191437769360463LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 1858771570U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (unsigned short)15906;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = 4802311898085202290ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = -1512750216;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = 1458766851U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_34 [i_0] [i_1] = 2386361855U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_35 [i_0] [i_1] = -1015990654;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = 4164627784U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 4362369984315519916LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 13960536548725905868ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)1504 : (short)25285;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_37 [i_0] = -7195866858429622018LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? 163764985U : 2099215961U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
