#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9314152104854915606ULL;
signed char var_3 = (signed char)-8;
short var_4 = (short)-20639;
unsigned long long int var_5 = 11076429930855486846ULL;
long long int var_8 = 2939853807478771829LL;
long long int var_10 = -3595501535172121856LL;
int zero = 0;
unsigned char var_11 = (unsigned char)231;
unsigned long long int var_12 = 12975488051302896390ULL;
int var_13 = 1079496803;
unsigned short var_14 = (unsigned short)58788;
long long int var_15 = -7598210686458840132LL;
unsigned long long int var_16 = 2585553026425666378ULL;
int var_17 = 557245298;
int var_18 = -1090537572;
long long int var_19 = 3578969611381555006LL;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_3 [20] ;
long long int arr_6 [20] ;
unsigned long long int arr_7 [20] [20] [20] [20] ;
long long int arr_8 [20] [20] ;
int arr_11 [17] [17] ;
_Bool arr_13 [19] ;
unsigned long long int arr_12 [17] ;
unsigned char arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 9699619905313472654ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 15200922090963136562ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -1360026556946985178LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 10775381349660132691ULL : 8107499680074360153ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = -5281460396313115289LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = -2071232416;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 12515340812510836110ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)232 : (unsigned char)235;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
