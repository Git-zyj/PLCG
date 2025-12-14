#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned int var_2 = 4278442695U;
unsigned long long int var_3 = 566988742643097768ULL;
long long int var_4 = -1041438522323591931LL;
short var_5 = (short)12590;
signed char var_6 = (signed char)-119;
unsigned long long int var_8 = 9974552746494856323ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)121;
unsigned short var_11 = (unsigned short)34796;
unsigned char var_13 = (unsigned char)47;
unsigned long long int var_15 = 48215499379625668ULL;
int var_19 = 1517765782;
int zero = 0;
signed char var_20 = (signed char)-98;
int var_21 = 1794810386;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3180632745U;
_Bool var_24 = (_Bool)0;
int var_25 = -854145358;
long long int var_26 = 9055482341680162889LL;
_Bool arr_0 [17] ;
long long int arr_1 [17] ;
unsigned short arr_3 [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -2797751018453754793LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)32821;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -3814481277049160503LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
