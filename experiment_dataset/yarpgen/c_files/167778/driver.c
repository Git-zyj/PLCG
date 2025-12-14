#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
long long int var_9 = -5384400662732842781LL;
unsigned long long int var_14 = 18042144027622619433ULL;
signed char var_15 = (signed char)58;
int zero = 0;
long long int var_18 = 4197658581680658220LL;
unsigned short var_19 = (unsigned short)36622;
unsigned long long int var_20 = 17676537245863628592ULL;
long long int var_21 = 200434541653423662LL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)202;
int var_24 = 1524852965;
unsigned char arr_0 [24] ;
unsigned char arr_1 [24] ;
short arr_2 [24] ;
unsigned long long int arr_3 [24] ;
unsigned char arr_4 [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-20914;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 15898327886850184840ULL : 10227080262400310227ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 5548164159370045659ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -2923079439497794137LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
