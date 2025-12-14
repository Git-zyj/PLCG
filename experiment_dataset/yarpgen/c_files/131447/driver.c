#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
int var_1 = 171436678;
long long int var_2 = -5954112667311387371LL;
unsigned long long int var_3 = 15835798174927935505ULL;
signed char var_5 = (signed char)-121;
unsigned int var_6 = 351797396U;
short var_7 = (short)11428;
unsigned int var_8 = 3696168735U;
unsigned short var_9 = (unsigned short)60263;
int zero = 0;
signed char var_10 = (signed char)114;
long long int var_11 = 4762241473479612976LL;
unsigned char var_12 = (unsigned char)178;
unsigned char var_13 = (unsigned char)12;
unsigned short var_14 = (unsigned short)59716;
short arr_0 [14] ;
int arr_1 [14] ;
signed char arr_3 [14] ;
_Bool arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)3628;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -176708296;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-72 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
