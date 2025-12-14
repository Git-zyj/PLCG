#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
long long int var_2 = 6776548769869569558LL;
unsigned int var_3 = 3027242303U;
signed char var_4 = (signed char)-96;
unsigned short var_5 = (unsigned short)4476;
long long int var_6 = 3138965061202346483LL;
signed char var_7 = (signed char)-43;
unsigned int var_8 = 1381134280U;
unsigned long long int var_10 = 16702550951781502493ULL;
long long int var_12 = 6605657446388097982LL;
signed char var_13 = (signed char)-68;
int zero = 0;
signed char var_14 = (signed char)103;
unsigned short var_15 = (unsigned short)45728;
unsigned long long int var_16 = 16796414259817873242ULL;
unsigned short var_17 = (unsigned short)59374;
short var_18 = (short)15555;
short var_19 = (short)-29084;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4106131903U;
unsigned long long int var_22 = 17512103810217624835ULL;
signed char var_23 = (signed char)46;
long long int var_24 = 4744997803658859194LL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)37;
long long int var_27 = 6206657980478000657LL;
signed char var_28 = (signed char)7;
signed char var_29 = (signed char)121;
unsigned short var_30 = (unsigned short)37857;
long long int var_31 = 5435543632808100871LL;
_Bool var_32 = (_Bool)1;
long long int var_33 = -1728612541032535017LL;
signed char var_34 = (signed char)124;
unsigned short arr_0 [10] ;
signed char arr_1 [10] ;
unsigned long long int arr_6 [10] ;
unsigned long long int arr_7 [10] ;
unsigned short arr_11 [10] ;
_Bool arr_12 [10] [10] ;
long long int arr_15 [10] [10] [10] ;
short arr_2 [10] ;
_Bool arr_3 [10] ;
unsigned int arr_4 [10] ;
unsigned short arr_8 [10] [10] ;
unsigned short arr_25 [10] [10] ;
_Bool arr_26 [10] ;
_Bool arr_29 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)40891;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 7385132927039939074ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 9628512131746193650ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4808 : (unsigned short)60364;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3301362852668747066LL : 9070819856441232790LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)10883;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 831029196U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)61194;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48620 : (unsigned short)3310;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
