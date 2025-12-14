#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
int var_1 = -787945346;
signed char var_2 = (signed char)68;
unsigned char var_4 = (unsigned char)51;
unsigned long long int var_5 = 7119332000137650880ULL;
unsigned short var_7 = (unsigned short)28715;
short var_9 = (short)2591;
signed char var_10 = (signed char)53;
signed char var_11 = (signed char)-87;
int var_12 = -555462661;
unsigned short var_15 = (unsigned short)15091;
unsigned char var_16 = (unsigned char)229;
int zero = 0;
unsigned int var_17 = 685820429U;
unsigned short var_18 = (unsigned short)22373;
unsigned long long int var_19 = 16832219851160937944ULL;
signed char var_20 = (signed char)5;
unsigned long long int var_21 = 13843686075129886603ULL;
unsigned char var_22 = (unsigned char)26;
unsigned int var_23 = 2025348139U;
unsigned short arr_0 [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_4 [14] ;
unsigned short arr_8 [14] ;
unsigned short arr_2 [17] ;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13408 : (unsigned short)18519;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8424970514942510020ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)33065;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2007 : (unsigned short)14587;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4131857 : 90730211;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
