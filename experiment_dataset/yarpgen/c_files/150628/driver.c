#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)58957;
unsigned long long int var_6 = 3160568059766804699ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 3623761309172307852ULL;
int zero = 0;
long long int var_14 = -3608780975396914560LL;
long long int var_15 = 4908149082629361496LL;
long long int var_16 = 7406873333062872364LL;
int var_17 = 495951747;
int var_18 = -233888061;
_Bool arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 5453741450228049881ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
