#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11770981248760334298ULL;
_Bool var_2 = (_Bool)1;
int var_6 = 56602999;
_Bool var_9 = (_Bool)0;
long long int var_10 = 5153398439957262693LL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)6;
long long int var_15 = -1405024490955874515LL;
int zero = 0;
signed char var_19 = (signed char)-90;
unsigned int var_20 = 4113448160U;
unsigned int var_21 = 2557893336U;
unsigned short var_22 = (unsigned short)2062;
unsigned int arr_0 [11] [11] ;
int arr_3 [11] ;
short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1137609353U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -314803585;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)7766;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
