#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-63;
unsigned int var_8 = 2905273844U;
unsigned short var_16 = (unsigned short)9647;
int zero = 0;
unsigned char var_20 = (unsigned char)51;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)30293;
long long int var_23 = 5402030390755507382LL;
short var_24 = (short)13222;
unsigned char var_25 = (unsigned char)214;
unsigned char var_26 = (unsigned char)201;
unsigned int var_27 = 1944314368U;
short var_28 = (short)3888;
unsigned char var_29 = (unsigned char)20;
unsigned long long int arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
_Bool arr_3 [24] [24] [24] ;
unsigned long long int arr_16 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 14182700011401605590ULL : 12266607795206034253ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 523201782U : 4144554024U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 7837599909458120696ULL : 12326987389039542634ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
