#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-28;
int var_6 = 1028161464;
signed char var_7 = (signed char)11;
long long int var_8 = -367766837575125910LL;
int var_11 = 41113427;
signed char var_12 = (signed char)66;
unsigned char var_13 = (unsigned char)106;
unsigned int var_16 = 2837317873U;
int zero = 0;
unsigned char var_18 = (unsigned char)146;
long long int var_19 = 7953337872047738346LL;
unsigned int var_20 = 3430996115U;
unsigned char var_21 = (unsigned char)132;
signed char var_22 = (signed char)-3;
unsigned char var_23 = (unsigned char)136;
int var_24 = 601860003;
signed char var_25 = (signed char)-47;
unsigned long long int var_26 = 6834109181014051981ULL;
long long int var_27 = -5778193581605129117LL;
long long int var_28 = 4948387993216008003LL;
long long int var_29 = 7739815344420289263LL;
unsigned char var_30 = (unsigned char)13;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
unsigned char arr_4 [10] ;
_Bool arr_6 [10] [10] [10] ;
_Bool arr_8 [10] [10] ;
long long int arr_12 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)59622;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)8082;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 4604493476629899976ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 12546234833151141935ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5321895023472801437LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
