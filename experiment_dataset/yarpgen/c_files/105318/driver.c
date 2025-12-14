#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30131;
long long int var_1 = 6265628579747479804LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-14006;
long long int var_7 = 6020652582138695659LL;
unsigned char var_8 = (unsigned char)210;
long long int var_10 = -7500652037835667516LL;
long long int var_11 = 315981324085643620LL;
int zero = 0;
signed char var_13 = (signed char)-108;
signed char var_14 = (signed char)22;
unsigned char var_15 = (unsigned char)229;
short var_16 = (short)-27576;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)67;
unsigned char var_20 = (unsigned char)82;
long long int arr_1 [11] [11] ;
_Bool arr_3 [11] [11] [11] ;
signed char arr_4 [11] [11] ;
short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 4910169745574163042LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-25086;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
