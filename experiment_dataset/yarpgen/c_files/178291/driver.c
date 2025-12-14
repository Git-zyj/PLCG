#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
int var_1 = 926691928;
unsigned char var_2 = (unsigned char)155;
unsigned int var_7 = 2437658468U;
signed char var_9 = (signed char)121;
unsigned char var_12 = (unsigned char)78;
int zero = 0;
unsigned int var_15 = 1354790077U;
int var_16 = 923587863;
signed char var_17 = (signed char)-104;
unsigned long long int var_18 = 10929235117484748472ULL;
short var_19 = (short)-3044;
unsigned long long int var_20 = 5603655479283259066ULL;
unsigned long long int var_21 = 3018646757692693749ULL;
signed char var_22 = (signed char)-110;
short var_23 = (short)-25482;
unsigned char var_24 = (unsigned char)228;
int var_25 = 1626371728;
int var_26 = 657886240;
unsigned int var_27 = 2631083312U;
unsigned char var_28 = (unsigned char)183;
unsigned char var_29 = (unsigned char)163;
int var_30 = 908191026;
short var_31 = (short)-446;
int arr_0 [10] [10] ;
int arr_1 [10] ;
unsigned long long int arr_2 [10] ;
_Bool arr_3 [10] [10] [10] ;
_Bool arr_4 [10] [10] ;
signed char arr_7 [10] [10] [10] ;
unsigned long long int arr_9 [10] [10] [10] [10] ;
signed char arr_11 [10] [10] [10] ;
unsigned long long int arr_12 [10] [10] ;
unsigned char arr_26 [11] ;
unsigned long long int arr_27 [11] ;
signed char arr_28 [11] [11] ;
unsigned long long int arr_29 [11] [11] ;
unsigned long long int arr_30 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 613467077;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -94354114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 6412769488219971095ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 16706522366292893900ULL : 12676602394869930849ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 3972596063022753887ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = 641181204629870603ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = 2348693358530114163ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 13991696463274193196ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
