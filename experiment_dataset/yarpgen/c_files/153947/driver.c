#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52348;
int var_7 = -1018298182;
unsigned int var_8 = 1976968265U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)242;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_18 = 410487828358286131LL;
long long int var_19 = 6507598958844052174LL;
long long int var_20 = -136530072400991702LL;
unsigned char var_21 = (unsigned char)130;
unsigned int var_22 = 43540124U;
int var_23 = -1605277341;
short var_24 = (short)-19317;
int var_25 = -619761943;
unsigned char var_26 = (unsigned char)143;
long long int var_27 = -4607426735862933235LL;
_Bool var_28 = (_Bool)1;
long long int var_29 = 2465907693047121704LL;
int var_30 = 2044114958;
long long int var_31 = 4136927403264348141LL;
unsigned short arr_1 [22] [22] ;
unsigned short arr_4 [22] [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
short arr_8 [25] ;
unsigned long long int arr_17 [25] [25] [25] [25] ;
unsigned char arr_20 [25] ;
int arr_22 [25] [25] ;
unsigned short arr_25 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)19205;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)42310;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1618735835014097921ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-27142;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 17460628582751956568ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = -816476546;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)38330;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
