#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23124;
unsigned int var_1 = 4256065582U;
long long int var_2 = -8453489128273669866LL;
unsigned char var_3 = (unsigned char)235;
long long int var_4 = -1640716913428446103LL;
unsigned char var_6 = (unsigned char)224;
unsigned char var_7 = (unsigned char)124;
unsigned int var_8 = 2918893951U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3637690153U;
int zero = 0;
short var_12 = (short)8633;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)45122;
unsigned char var_15 = (unsigned char)29;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 6120046739717798936ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
