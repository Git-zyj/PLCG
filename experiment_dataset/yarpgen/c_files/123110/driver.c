#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3742660432774188773LL;
long long int var_7 = 3818508129287862179LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 2589098324874141112LL;
int var_12 = 795079719;
signed char var_13 = (signed char)-17;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = 7474854567728580402LL;
long long int var_19 = 4899855348635482154LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-10;
_Bool var_23 = (_Bool)1;
int var_24 = -1701922682;
int var_25 = 194829968;
int var_26 = -1054897485;
_Bool arr_1 [24] ;
int arr_3 [24] [24] ;
signed char arr_4 [24] [24] [24] ;
long long int arr_9 [19] ;
_Bool arr_10 [19] [19] ;
int arr_12 [19] [19] [19] ;
int arr_15 [19] ;
int arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -1010284431;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -1290272538645847747LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1577413386;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1213056460 : -838038564;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1015322100 : 300836738;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
