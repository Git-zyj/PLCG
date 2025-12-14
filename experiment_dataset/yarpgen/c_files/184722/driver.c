#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1801132075000728609LL;
int var_2 = 179349549;
_Bool var_4 = (_Bool)0;
long long int var_8 = -691835163944520773LL;
int var_14 = -871692241;
long long int var_15 = 6144185116419931750LL;
unsigned char var_16 = (unsigned char)127;
unsigned char var_17 = (unsigned char)151;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1038927029;
long long int var_22 = -4210813407014456982LL;
unsigned char var_23 = (unsigned char)61;
unsigned char var_24 = (unsigned char)16;
int var_25 = -329043196;
long long int var_26 = 4388174569545204873LL;
long long int var_27 = 8125756980676879678LL;
long long int var_28 = 1058313051935103805LL;
unsigned char var_29 = (unsigned char)247;
unsigned char var_30 = (unsigned char)254;
long long int arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
_Bool arr_3 [24] [24] ;
unsigned char arr_6 [24] ;
unsigned char arr_8 [25] ;
_Bool arr_9 [25] [25] ;
int arr_14 [17] ;
long long int arr_18 [17] ;
unsigned char arr_4 [24] ;
_Bool arr_7 [24] [24] ;
_Bool arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2128832492627915727LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -5640113072783496394LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)199 : (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = -1220213774;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = -7478637898190441363LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
