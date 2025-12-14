#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
long long int var_1 = 5450907354798265613LL;
unsigned long long int var_4 = 18114993674169312711ULL;
long long int var_5 = -1441493143739834492LL;
unsigned int var_6 = 2644262498U;
int var_9 = 1692608115;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3309491357U;
int var_13 = 1598942531;
unsigned long long int var_15 = 17127969158559010406ULL;
int var_16 = -1758794114;
int zero = 0;
unsigned int var_17 = 2782075804U;
unsigned char var_18 = (unsigned char)18;
unsigned char var_19 = (unsigned char)142;
long long int var_20 = -1532129169243935013LL;
unsigned long long int var_21 = 13690664492811474786ULL;
signed char var_22 = (signed char)-19;
signed char var_23 = (signed char)-113;
unsigned char var_24 = (unsigned char)128;
signed char var_25 = (signed char)-9;
short var_26 = (short)16510;
long long int arr_0 [14] ;
signed char arr_2 [14] ;
long long int arr_5 [14] ;
unsigned long long int arr_6 [14] [14] [14] ;
unsigned long long int arr_8 [20] ;
unsigned int arr_9 [20] [20] ;
unsigned char arr_3 [14] ;
_Bool arr_7 [14] ;
_Bool arr_12 [20] ;
unsigned int arr_15 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -8515860166040398459LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -2835974779955953982LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 842117710708039259ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 10937808087021169701ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 3012420001U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 3775762250U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
