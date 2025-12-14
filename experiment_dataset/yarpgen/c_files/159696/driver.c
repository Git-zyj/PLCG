#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
signed char var_1 = (signed char)-64;
signed char var_3 = (signed char)-115;
signed char var_6 = (signed char)-25;
long long int var_7 = -1032618120861252097LL;
long long int var_9 = 7147354029874506912LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -8738266060724516591LL;
signed char var_13 = (signed char)80;
int zero = 0;
signed char var_14 = (signed char)-95;
signed char var_15 = (signed char)-46;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-6;
long long int var_19 = -816335101821012128LL;
long long int var_20 = 4544675255680946906LL;
long long int var_21 = -2399339449796736228LL;
long long int var_22 = 7577894392035740740LL;
long long int var_23 = 4571385065632465708LL;
_Bool arr_0 [22] [22] ;
long long int arr_1 [22] [22] ;
long long int arr_4 [11] ;
_Bool arr_5 [11] [11] ;
long long int arr_9 [10] ;
signed char arr_2 [22] [22] ;
_Bool arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -9084701836927609425LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 5030239319751005562LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 7803717659532677748LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
