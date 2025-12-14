#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -609112752;
_Bool var_6 = (_Bool)0;
short var_7 = (short)31228;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)17065;
unsigned short var_12 = (unsigned short)40197;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = 961922077784056010LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16775465489371472946ULL;
short var_18 = (short)22704;
unsigned long long int var_19 = 13936805109352869954ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-41;
long long int var_22 = -7403630458107254480LL;
signed char arr_1 [11] ;
_Bool arr_4 [11] [11] [11] ;
signed char arr_6 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-64;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
