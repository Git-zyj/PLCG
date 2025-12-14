#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2426139541U;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-113;
unsigned int var_4 = 1536633247U;
int var_6 = -241284382;
short var_7 = (short)2331;
signed char var_8 = (signed char)115;
signed char var_11 = (signed char)5;
unsigned short var_12 = (unsigned short)151;
unsigned int var_13 = 2291394658U;
unsigned int var_14 = 1097930362U;
long long int var_15 = -5017431881467623702LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)5;
long long int var_18 = 419637135679318810LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 9173527774474667659LL;
unsigned int var_21 = 2730221581U;
unsigned char var_22 = (unsigned char)111;
unsigned long long int var_23 = 11027110439340943252ULL;
signed char var_24 = (signed char)-54;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)153;
unsigned int var_27 = 2739180050U;
long long int var_28 = -8605913541806178673LL;
short arr_6 [17] [17] [17] ;
unsigned short arr_17 [17] ;
unsigned char arr_18 [17] ;
unsigned char arr_19 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-22875;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned short)3915;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)216;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
