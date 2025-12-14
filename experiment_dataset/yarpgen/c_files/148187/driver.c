#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)26;
signed char var_12 = (signed char)75;
signed char var_17 = (signed char)-79;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13593998259036569312ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-2;
unsigned long long int var_23 = 11747239955436381223ULL;
_Bool var_24 = (_Bool)1;
unsigned long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [20] [20] ;
signed char arr_3 [20] ;
signed char arr_4 [20] ;
signed char arr_7 [20] ;
unsigned long long int arr_5 [20] ;
signed char arr_8 [20] [20] ;
_Bool arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1623693938369936396ULL : 12476884688536241673ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 291457656577931762ULL : 605841273312155782ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 10735396474891959989ULL : 9630425614629505695ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)94 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 14377762387332093264ULL : 17152263059140238227ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
