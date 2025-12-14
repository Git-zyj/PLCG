#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5413;
unsigned short var_3 = (unsigned short)51752;
short var_8 = (short)202;
unsigned short var_9 = (unsigned short)63777;
unsigned short var_18 = (unsigned short)50143;
int zero = 0;
unsigned short var_20 = (unsigned short)36268;
short var_21 = (short)30872;
unsigned int var_22 = 3834948042U;
short var_23 = (short)-28741;
unsigned short var_24 = (unsigned short)37217;
_Bool var_25 = (_Bool)1;
long long int var_26 = -2515178151830711937LL;
unsigned short var_27 = (unsigned short)25625;
unsigned int arr_3 [23] [23] ;
signed char arr_5 [23] [23] ;
signed char arr_2 [23] ;
short arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1765443318U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16509 : (short)-18449;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
