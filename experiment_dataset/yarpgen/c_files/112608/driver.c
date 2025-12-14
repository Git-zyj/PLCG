#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4781575871353580420ULL;
short var_2 = (short)30875;
long long int var_3 = -5301809535245823058LL;
unsigned short var_4 = (unsigned short)13421;
unsigned int var_7 = 2936512763U;
signed char var_9 = (signed char)-62;
unsigned short var_10 = (unsigned short)60302;
long long int var_11 = -1093788253641211530LL;
long long int var_12 = 2622317143194151732LL;
int zero = 0;
unsigned long long int var_13 = 6874029834255472350ULL;
int var_14 = 1303148529;
unsigned long long int var_15 = 15378423940483451208ULL;
long long int var_16 = -2315681537208066751LL;
short var_17 = (short)19202;
unsigned long long int var_18 = 12529814738920950033ULL;
unsigned char arr_0 [20] [20] ;
unsigned char arr_1 [20] [20] ;
int arr_2 [20] ;
signed char arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1316148885;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-64;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
