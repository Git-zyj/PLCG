#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5963;
signed char var_3 = (signed char)15;
long long int var_5 = -4538941216024020491LL;
unsigned long long int var_10 = 10551686599584146487ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)55;
unsigned long long int var_21 = 4058131650333106869ULL;
long long int var_22 = 3729149850020955902LL;
unsigned int var_23 = 2923463823U;
unsigned char var_24 = (unsigned char)153;
signed char var_25 = (signed char)-47;
long long int var_26 = -6795655800378740031LL;
short var_27 = (short)27343;
signed char arr_0 [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
unsigned char arr_8 [19] [19] ;
_Bool arr_12 [19] ;
unsigned int arr_14 [19] [19] ;
long long int arr_6 [17] [17] [17] ;
unsigned short arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3937587982129326525ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 1223993629U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3015759518121421076LL : -6300377898562414729LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned short)6272;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
