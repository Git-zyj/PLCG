#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 897585159U;
unsigned long long int var_1 = 11145087185202591381ULL;
unsigned int var_2 = 2889208179U;
short var_3 = (short)28294;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3417347418U;
long long int var_6 = -7980431660619545421LL;
signed char var_7 = (signed char)-106;
long long int var_8 = 7911589051208520644LL;
unsigned char var_9 = (unsigned char)98;
unsigned long long int var_10 = 15731009041223975840ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)28368;
unsigned int var_13 = 1491528519U;
unsigned int var_14 = 3642495121U;
int zero = 0;
signed char var_15 = (signed char)56;
signed char var_16 = (signed char)99;
int var_17 = 470756228;
int var_18 = -1769259756;
long long int var_19 = 3707849270479992232LL;
unsigned long long int var_20 = 15088984289628448695ULL;
long long int var_21 = 6477409675705584032LL;
unsigned long long int var_22 = 8391015195586450844ULL;
unsigned long long int arr_7 [19] [19] [19] ;
signed char arr_13 [17] [17] ;
signed char arr_24 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 18154362171085990937ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)108 : (signed char)-16;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
