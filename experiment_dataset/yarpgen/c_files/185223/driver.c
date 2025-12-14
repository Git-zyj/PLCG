#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1476851843U;
unsigned short var_4 = (unsigned short)3862;
unsigned char var_5 = (unsigned char)57;
long long int var_6 = -761456733116330357LL;
unsigned short var_7 = (unsigned short)47762;
unsigned char var_11 = (unsigned char)104;
unsigned char var_12 = (unsigned char)33;
unsigned char var_13 = (unsigned char)19;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-29114;
int zero = 0;
int var_17 = -530395204;
int var_18 = -1936008006;
unsigned int var_19 = 4055174809U;
unsigned int var_20 = 4189585380U;
long long int var_21 = 7789010663803927530LL;
int var_22 = 29033115;
_Bool var_23 = (_Bool)1;
int var_24 = -682828974;
_Bool var_25 = (_Bool)1;
int var_26 = -1130811901;
unsigned int arr_1 [16] ;
int arr_2 [16] ;
unsigned short arr_3 [16] [16] ;
int arr_5 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2698392722U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1679328623;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)26560;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -505679292;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
