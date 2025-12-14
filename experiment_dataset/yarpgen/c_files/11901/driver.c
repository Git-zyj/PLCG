#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 9138117569553547509LL;
long long int var_7 = 7785647228798486208LL;
long long int var_8 = 2717800298826309917LL;
long long int var_10 = 7091269845074597231LL;
unsigned short var_12 = (unsigned short)11737;
unsigned int var_14 = 2087670186U;
short var_19 = (short)5195;
int zero = 0;
unsigned int var_20 = 895443594U;
unsigned int var_21 = 345414240U;
long long int var_22 = 5876734202420033756LL;
long long int var_23 = -3550714703306896280LL;
signed char var_24 = (signed char)123;
long long int var_25 = 4977535924357012442LL;
short arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
unsigned int arr_7 [12] ;
long long int arr_10 [12] [12] [12] [12] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)31503;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -8517767156329566762LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 771399243U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 8700426314220689545LL : -5667359759438864935LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)52281;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
