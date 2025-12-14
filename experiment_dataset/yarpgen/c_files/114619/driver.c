#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1456723891284090256LL;
signed char var_2 = (signed char)-123;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)243;
long long int var_5 = -4915175861048135583LL;
unsigned short var_6 = (unsigned short)5874;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)54709;
long long int var_12 = -6859910431052041657LL;
short var_13 = (short)27240;
unsigned short var_14 = (unsigned short)27705;
short var_15 = (short)19410;
unsigned short var_16 = (unsigned short)58878;
long long int var_17 = -6457063844375509650LL;
unsigned short var_18 = (unsigned short)52115;
short var_19 = (short)-23433;
unsigned short arr_0 [12] [12] ;
unsigned short arr_4 [12] [12] ;
unsigned short arr_5 [12] [12] ;
int arr_6 [12] [12] [12] ;
_Bool arr_11 [17] [17] ;
unsigned short arr_12 [17] ;
unsigned short arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20137;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)65263;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30989 : (unsigned short)36768;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1281574220;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned short)16635;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned short)34005;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
