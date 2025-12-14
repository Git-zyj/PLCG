#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5098624065037830425LL;
unsigned char var_4 = (unsigned char)33;
unsigned char var_5 = (unsigned char)188;
unsigned short var_6 = (unsigned short)20781;
unsigned char var_8 = (unsigned char)76;
short var_9 = (short)27368;
signed char var_10 = (signed char)80;
unsigned int var_12 = 1348629856U;
int zero = 0;
short var_16 = (short)25400;
unsigned int var_17 = 167010821U;
long long int var_18 = 2301262160820360005LL;
unsigned short var_19 = (unsigned short)9510;
_Bool var_20 = (_Bool)0;
short var_21 = (short)9932;
unsigned short var_22 = (unsigned short)45307;
unsigned char var_23 = (unsigned char)234;
unsigned short var_24 = (unsigned short)51008;
unsigned char var_25 = (unsigned char)237;
short var_26 = (short)11412;
long long int var_27 = -1044325089101750427LL;
long long int arr_0 [11] ;
int arr_4 [12] [12] ;
short arr_7 [16] ;
unsigned short arr_9 [16] ;
long long int arr_10 [16] [16] [16] ;
unsigned short arr_12 [16] ;
unsigned char arr_2 [11] ;
signed char arr_6 [12] ;
long long int arr_14 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -4142567227341125909LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 137502790;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)31638;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)60627;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 9179988182842598357LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)44895;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 919103039237064062LL : 7486444947941562135LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
