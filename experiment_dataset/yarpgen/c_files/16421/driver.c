#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8135077362975436340ULL;
short var_1 = (short)-1145;
signed char var_2 = (signed char)-29;
signed char var_4 = (signed char)64;
unsigned char var_5 = (unsigned char)32;
int var_6 = 1135513675;
short var_7 = (short)18641;
long long int var_8 = -7577465984277339679LL;
long long int var_9 = -3346421768415387628LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5826686763839195471LL;
short var_13 = (short)9854;
signed char var_14 = (signed char)52;
unsigned int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] ;
long long int arr_4 [22] [22] ;
_Bool arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1173677162U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1255835500U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 9851518979572427810ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -7733791410192940840LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
