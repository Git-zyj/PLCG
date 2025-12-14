#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23974;
unsigned short var_3 = (unsigned short)37891;
long long int var_6 = -6654242183583259445LL;
short var_8 = (short)-20562;
unsigned int var_10 = 399187226U;
unsigned int var_12 = 3930192639U;
unsigned char var_14 = (unsigned char)251;
unsigned char var_16 = (unsigned char)111;
unsigned short var_17 = (unsigned short)4363;
int zero = 0;
unsigned short var_18 = (unsigned short)21159;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2994972177928067809ULL;
unsigned short arr_0 [20] ;
_Bool arr_1 [20] ;
long long int arr_2 [20] [20] ;
long long int arr_3 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)41841;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 2975033841273095065LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 179773760443551904LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1617404922 : -600459869;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
