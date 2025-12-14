#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -186044398;
int var_1 = -942514469;
unsigned char var_2 = (unsigned char)113;
int var_4 = 1568860651;
unsigned long long int var_6 = 11278817696634175235ULL;
unsigned int var_9 = 1798609717U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -539813869650538975LL;
int zero = 0;
unsigned long long int var_12 = 15634369353015724121ULL;
int var_13 = -212894996;
unsigned short var_14 = (unsigned short)45843;
unsigned short arr_0 [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_2 [17] [17] ;
long long int arr_4 [17] ;
long long int arr_5 [17] [17] [17] [17] ;
long long int arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16477 : (unsigned short)57847;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 15823201180768188541ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -3199915573055743418LL : 8930552303791256989LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -338405687016572135LL : -3161974795729095461LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 4418355704551533481LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7072238932109745382LL : -4600282829010833774LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
