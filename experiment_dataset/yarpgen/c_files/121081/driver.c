#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
_Bool var_1 = (_Bool)1;
short var_2 = (short)8374;
signed char var_4 = (signed char)-6;
signed char var_6 = (signed char)88;
unsigned long long int var_8 = 17390295503312571538ULL;
unsigned char var_12 = (unsigned char)160;
long long int var_13 = 325890846425889951LL;
int zero = 0;
short var_14 = (short)4941;
unsigned short var_15 = (unsigned short)53529;
unsigned int var_16 = 3572082060U;
unsigned short var_17 = (unsigned short)22217;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-27395;
_Bool arr_1 [20] ;
unsigned char arr_8 [20] [20] [20] [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -254663793 : 1160122230;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
