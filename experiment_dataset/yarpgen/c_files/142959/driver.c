#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15672;
unsigned long long int var_2 = 5907259400595880473ULL;
signed char var_4 = (signed char)35;
int var_5 = 1296552793;
_Bool var_6 = (_Bool)0;
int var_7 = 1192278085;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_18 = (short)16396;
long long int var_19 = -9207728215672104740LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3377851385U;
int var_22 = 766225930;
unsigned char var_23 = (unsigned char)95;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 2977771023U;
unsigned long long int var_26 = 16712428831581149562ULL;
unsigned short var_27 = (unsigned short)62311;
unsigned short var_28 = (unsigned short)41562;
long long int var_29 = 5767842894872068686LL;
_Bool var_30 = (_Bool)0;
int var_31 = -1909803930;
signed char arr_0 [20] ;
_Bool arr_1 [20] ;
int arr_3 [11] [11] ;
unsigned char arr_9 [11] ;
int arr_13 [11] [11] [11] [11] ;
unsigned char arr_25 [18] ;
unsigned short arr_2 [20] ;
unsigned char arr_5 [11] ;
unsigned short arr_6 [11] ;
unsigned char arr_10 [11] ;
int arr_17 [11] [11] [11] ;
short arr_26 [18] [18] [18] [18] ;
unsigned char arr_27 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 106390525;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1301944728;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)25731;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)51913;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1963370863 : -1081115931;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (short)-19906;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)25;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
