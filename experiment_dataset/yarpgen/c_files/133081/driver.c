#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2573559649641410990LL;
unsigned short var_1 = (unsigned short)21955;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3097692600U;
unsigned short var_5 = (unsigned short)53730;
short var_6 = (short)27238;
_Bool var_7 = (_Bool)1;
int var_8 = 1794653975;
unsigned short var_9 = (unsigned short)23334;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)23661;
short var_13 = (short)1017;
unsigned long long int var_14 = 1179101523891283700ULL;
unsigned long long int arr_2 [18] ;
short arr_3 [18] [18] ;
unsigned short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3065651674111925065ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22605;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)24934;
}

void checksum() {
    hash(&seed, var_11);
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
