#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -142380646702802065LL;
_Bool var_2 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-76;
long long int var_12 = -7290069901511604638LL;
unsigned char var_13 = (unsigned char)169;
int zero = 0;
signed char var_16 = (signed char)-85;
int var_17 = 476485420;
short var_18 = (short)-9206;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)105;
unsigned int var_21 = 3082455006U;
unsigned int var_22 = 1808181690U;
signed char var_23 = (signed char)-51;
short var_24 = (short)2282;
int arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
int arr_4 [15] [15] [15] ;
long long int arr_7 [15] [15] [15] [15] ;
int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 286944187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 14922718436981749928ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 84478218 : -1333872354;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 7667735738336164948LL : 8622727389724550034LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1017850140;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
