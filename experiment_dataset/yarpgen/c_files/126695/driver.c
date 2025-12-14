#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-53;
unsigned int var_5 = 2793717967U;
unsigned short var_12 = (unsigned short)40042;
int zero = 0;
unsigned long long int var_17 = 6925105205384380130ULL;
unsigned short var_18 = (unsigned short)25231;
signed char var_19 = (signed char)1;
int var_20 = 1753374724;
int var_21 = -1826809488;
signed char var_22 = (signed char)-99;
long long int var_23 = -6972996234999223005LL;
long long int var_24 = -7573765763261465728LL;
long long int var_25 = -6420470748634421007LL;
short var_26 = (short)32485;
unsigned int var_27 = 1521858112U;
short arr_0 [25] ;
_Bool arr_1 [25] [25] ;
unsigned char arr_3 [22] [22] ;
unsigned int arr_9 [19] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-1157 : (short)-20586;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 1058813967U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1514637225U : 100276430U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
