#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
int var_1 = -484452900;
int var_2 = -179042162;
signed char var_3 = (signed char)57;
signed char var_4 = (signed char)10;
signed char var_5 = (signed char)51;
unsigned short var_6 = (unsigned short)62825;
signed char var_7 = (signed char)-54;
unsigned int var_9 = 3026919962U;
_Bool var_10 = (_Bool)0;
int var_11 = 1461323765;
signed char var_12 = (signed char)80;
int var_13 = -873828067;
unsigned short var_14 = (unsigned short)2239;
signed char var_15 = (signed char)-126;
unsigned long long int var_16 = 14723274710659367234ULL;
int zero = 0;
unsigned int var_17 = 4263250922U;
unsigned int var_18 = 3988961474U;
unsigned int var_19 = 3553690799U;
unsigned int arr_0 [20] ;
long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3263771500U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -4850270279685192699LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 15989487986024667951ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
