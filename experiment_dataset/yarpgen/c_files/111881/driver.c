#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
int var_6 = -1141236932;
long long int var_8 = -5121160315133515203LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-14804;
unsigned char var_15 = (unsigned char)246;
int zero = 0;
unsigned int var_17 = 3129176413U;
unsigned long long int var_18 = 998216656265826590ULL;
unsigned short var_19 = (unsigned short)9663;
unsigned int var_20 = 3881918670U;
_Bool var_21 = (_Bool)0;
int var_22 = 1069427095;
unsigned long long int arr_0 [18] [18] ;
_Bool arr_1 [18] ;
unsigned short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 10134824443894292680ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53340 : (unsigned short)55663;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
