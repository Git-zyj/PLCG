#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3459326216U;
unsigned short var_3 = (unsigned short)37825;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-47;
unsigned int var_10 = 2654756829U;
int zero = 0;
unsigned short var_11 = (unsigned short)14645;
_Bool var_12 = (_Bool)0;
int var_13 = -844361376;
unsigned long long int var_14 = 14051005744007856583ULL;
int var_15 = 1832708168;
unsigned char var_16 = (unsigned char)85;
unsigned short var_17 = (unsigned short)50420;
unsigned short arr_0 [10] ;
signed char arr_1 [10] ;
_Bool arr_2 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)20807;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
