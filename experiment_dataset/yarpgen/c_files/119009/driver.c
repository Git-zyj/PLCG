#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1933522504;
int var_1 = -1299100766;
int var_6 = 1131482682;
unsigned short var_8 = (unsigned short)33212;
int var_9 = -1513888180;
int zero = 0;
long long int var_10 = 30333689336026383LL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)122;
unsigned char var_13 = (unsigned char)146;
long long int var_14 = -4336977634828695166LL;
unsigned short var_15 = (unsigned short)26904;
unsigned short var_16 = (unsigned short)30641;
unsigned long long int arr_1 [18] ;
unsigned short arr_3 [18] ;
long long int arr_6 [18] [18] ;
unsigned long long int arr_8 [18] [18] ;
int arr_16 [18] [18] [18] [18] ;
long long int arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1982146542133339639ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)42142;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 8777862727849500944LL : -3021951048041907218LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 4306616675521576243ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -49965143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = -3276396354614477822LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
