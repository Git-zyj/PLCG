#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14155401892083348178ULL;
int var_3 = -691014421;
unsigned int var_4 = 524352376U;
long long int var_6 = 1739241866952897975LL;
signed char var_7 = (signed char)-88;
unsigned int var_8 = 812043517U;
signed char var_9 = (signed char)-31;
long long int var_10 = -6847956389802919017LL;
unsigned long long int var_11 = 15767106787797017129ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2083792488U;
unsigned int var_15 = 1500606831U;
unsigned char var_16 = (unsigned char)195;
long long int var_17 = -4387498722932868129LL;
unsigned short var_18 = (unsigned short)20741;
int var_19 = -1358798202;
unsigned short var_20 = (unsigned short)44799;
signed char var_21 = (signed char)89;
int var_22 = -1789875768;
unsigned long long int var_23 = 16407192308984785050ULL;
long long int var_24 = -4317578050231655321LL;
unsigned int var_25 = 2435666648U;
unsigned short var_26 = (unsigned short)26215;
signed char var_27 = (signed char)-5;
long long int arr_0 [23] ;
int arr_3 [23] ;
long long int arr_7 [23] [23] ;
unsigned char arr_2 [23] ;
unsigned short arr_5 [23] ;
unsigned short arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 5191879540589713308LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -824666103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -791469645950758796LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)33306;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)17873;
}

void checksum() {
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
