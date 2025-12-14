#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10030302688353497179ULL;
long long int var_1 = -4738292660457732537LL;
_Bool var_2 = (_Bool)1;
int var_3 = 1278758724;
unsigned long long int var_4 = 4006503439932051584ULL;
unsigned char var_5 = (unsigned char)89;
signed char var_7 = (signed char)-28;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-25;
short var_13 = (short)16176;
signed char var_14 = (signed char)-66;
unsigned char var_15 = (unsigned char)90;
signed char var_16 = (signed char)80;
unsigned long long int var_17 = 6335937159821753974ULL;
unsigned int var_18 = 4227737643U;
signed char var_19 = (signed char)4;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)121;
short var_23 = (short)14538;
long long int arr_2 [12] ;
short arr_3 [12] ;
unsigned long long int arr_6 [20] ;
unsigned long long int arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4835385352148163897LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)27239;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 13069697461440951415ULL : 10064165965113525300ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 6562330400128998179ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
