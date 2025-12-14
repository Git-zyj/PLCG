#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29905;
unsigned char var_2 = (unsigned char)31;
short var_6 = (short)4185;
signed char var_7 = (signed char)-4;
unsigned long long int var_9 = 4973763952622386962ULL;
unsigned char var_11 = (unsigned char)71;
short var_12 = (short)-1945;
unsigned long long int var_14 = 3290126471199902716ULL;
unsigned char var_17 = (unsigned char)117;
int zero = 0;
unsigned long long int var_19 = 10519488327925516751ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3234395503967005295ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-1143;
unsigned long long int var_24 = 4069949578821844357ULL;
short var_25 = (short)-21348;
signed char var_26 = (signed char)-5;
unsigned char var_27 = (unsigned char)101;
unsigned long long int var_28 = 16372266122976014422ULL;
signed char var_29 = (signed char)39;
short var_30 = (short)-3022;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 16647378578962052224ULL;
unsigned long long int arr_0 [11] ;
_Bool arr_1 [11] [11] ;
signed char arr_4 [11] ;
short arr_9 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_11 [11] [11] [11] [11] [11] [11] ;
_Bool arr_21 [20] ;
unsigned long long int arr_29 [20] [20] [20] ;
signed char arr_34 [22] [22] ;
int arr_35 [22] ;
unsigned int arr_12 [11] [11] [11] [11] ;
unsigned char arr_36 [22] ;
_Bool arr_37 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2701203515980805657ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)1588;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1175780940U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 1079376413258344084ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = 2027822132;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 83438944U : 644555168U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
