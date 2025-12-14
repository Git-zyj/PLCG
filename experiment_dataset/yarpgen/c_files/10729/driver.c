#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1394650686626469472LL;
unsigned int var_1 = 1555673656U;
unsigned short var_4 = (unsigned short)21769;
short var_7 = (short)3906;
unsigned short var_8 = (unsigned short)43956;
long long int var_9 = -6371444171644263438LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 3500392227603331830ULL;
unsigned int var_13 = 2622710864U;
short var_15 = (short)-6664;
int var_18 = -1713261800;
long long int var_19 = 290895064356535871LL;
int zero = 0;
unsigned long long int var_20 = 17299846002116524050ULL;
signed char var_21 = (signed char)8;
unsigned short var_22 = (unsigned short)46634;
int var_23 = -1504734473;
signed char var_24 = (signed char)42;
signed char arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)64867;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 5356049276082698331ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
