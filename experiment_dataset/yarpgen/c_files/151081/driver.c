#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
int var_1 = -464386766;
int var_3 = 1159336388;
unsigned char var_5 = (unsigned char)107;
unsigned long long int var_6 = 12681231856623377274ULL;
long long int var_7 = -8324191298120419555LL;
unsigned short var_8 = (unsigned short)33956;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-124;
unsigned short var_12 = (unsigned short)1894;
int zero = 0;
short var_13 = (short)12096;
long long int var_14 = 3464395739810988793LL;
unsigned short var_15 = (unsigned short)35858;
signed char var_16 = (signed char)124;
unsigned int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2068904946U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)46753;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
