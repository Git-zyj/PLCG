#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 520474254U;
int var_2 = 43313452;
unsigned short var_5 = (unsigned short)54925;
unsigned char var_6 = (unsigned char)158;
long long int var_7 = -8810790759716993091LL;
unsigned long long int var_13 = 8836347007943959322ULL;
unsigned char var_15 = (unsigned char)34;
int var_16 = 7819846;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-32;
unsigned char var_21 = (unsigned char)63;
unsigned int var_22 = 2164387899U;
unsigned int var_23 = 2515592053U;
unsigned long long int var_24 = 16545507768651314224ULL;
signed char var_25 = (signed char)-109;
long long int var_26 = -6623637475107086768LL;
unsigned long long int var_27 = 17219818647076708992ULL;
int arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
unsigned int arr_4 [25] ;
_Bool arr_7 [25] [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1557813295;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)27963;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 514404652U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 952242014U : 2304633082U;
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
