#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
unsigned int var_1 = 1597577683U;
unsigned int var_2 = 3017602989U;
unsigned char var_3 = (unsigned char)7;
long long int var_4 = -8001004108092568908LL;
unsigned short var_5 = (unsigned short)27552;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-113;
signed char var_9 = (signed char)40;
long long int var_10 = -7727103502570172925LL;
unsigned int var_11 = 1380785237U;
short var_12 = (short)-18968;
unsigned short var_13 = (unsigned short)11745;
short var_14 = (short)-3214;
unsigned char var_15 = (unsigned char)54;
unsigned int var_16 = 1055182990U;
unsigned int var_17 = 3196692012U;
int zero = 0;
signed char var_18 = (signed char)-64;
unsigned short var_19 = (unsigned short)5091;
unsigned int var_20 = 1103794559U;
signed char var_21 = (signed char)78;
unsigned int var_22 = 536087756U;
signed char var_23 = (signed char)26;
unsigned char arr_0 [16] [16] ;
unsigned int arr_1 [16] [16] ;
signed char arr_2 [16] [16] ;
long long int arr_4 [16] ;
unsigned int arr_5 [16] [16] [16] ;
short arr_6 [16] [16] [16] [16] ;
_Bool arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1650215987U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 6297924538044839956LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1602751901U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)10343;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
