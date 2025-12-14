#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
long long int var_1 = -2800582697603262773LL;
signed char var_2 = (signed char)-62;
unsigned char var_3 = (unsigned char)254;
signed char var_4 = (signed char)-73;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2948203092346991701ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3147474192U;
int var_9 = 1162831676;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-2948;
unsigned char var_12 = (unsigned char)64;
unsigned long long int var_13 = 17620872380520967970ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)31;
unsigned long long int var_15 = 1548460152030021488ULL;
long long int var_16 = -227845930420137063LL;
int var_17 = -2084946178;
long long int var_18 = -6879744575789146369LL;
_Bool arr_2 [22] [22] ;
unsigned int arr_5 [19] [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 4019316925U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 5011950428758068018ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
