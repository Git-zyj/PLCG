#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27795;
short var_1 = (short)-27457;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6228611326474471815LL;
unsigned short var_5 = (unsigned short)38148;
unsigned char var_7 = (unsigned char)201;
unsigned int var_9 = 449016730U;
int zero = 0;
short var_10 = (short)-22302;
long long int var_11 = -300833124015469100LL;
unsigned short var_12 = (unsigned short)53673;
int var_13 = -2054510833;
short arr_0 [17] [17] ;
short arr_4 [17] ;
int arr_7 [17] [17] [17] [17] [17] ;
short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-10043;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-1516;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 274568398;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)31744;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
