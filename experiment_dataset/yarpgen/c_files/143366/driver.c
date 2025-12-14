#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5270945009749206812LL;
unsigned long long int var_1 = 1344462603966342827ULL;
long long int var_3 = 7540749286817071141LL;
unsigned short var_5 = (unsigned short)57738;
unsigned char var_6 = (unsigned char)165;
long long int var_7 = -6652323513377026687LL;
signed char var_9 = (signed char)-29;
signed char var_12 = (signed char)-63;
unsigned long long int var_14 = 9506634183948975084ULL;
unsigned char var_16 = (unsigned char)66;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1231299278938681288LL;
signed char var_19 = (signed char)-26;
unsigned char var_20 = (unsigned char)253;
int var_21 = -1327777461;
signed char var_22 = (signed char)-35;
short var_23 = (short)32621;
long long int var_24 = -51642111641859784LL;
unsigned short var_25 = (unsigned short)55204;
long long int var_26 = -8569663715487254333LL;
signed char var_27 = (signed char)29;
signed char var_28 = (signed char)-22;
unsigned long long int var_29 = 16254723094989951751ULL;
unsigned char var_30 = (unsigned char)114;
int var_31 = -2142311032;
signed char var_32 = (signed char)-117;
unsigned int var_33 = 2725014002U;
long long int var_34 = 1609540230207486371LL;
unsigned long long int var_35 = 9938516572878640146ULL;
unsigned short var_36 = (unsigned short)33573;
short arr_0 [19] [19] ;
_Bool arr_3 [19] [19] ;
unsigned long long int arr_7 [13] ;
long long int arr_8 [13] ;
unsigned char arr_12 [13] [13] [13] ;
unsigned long long int arr_22 [13] ;
short arr_4 [19] [19] ;
unsigned char arr_20 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-24044;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 8269569484978998752ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -4147563388026842832LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = 15196436378134952779ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16922;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)139;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
