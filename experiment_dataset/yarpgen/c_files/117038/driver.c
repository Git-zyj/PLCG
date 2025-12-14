#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11940854534127297312ULL;
unsigned char var_8 = (unsigned char)77;
short var_11 = (short)-20032;
unsigned char var_14 = (unsigned char)70;
signed char var_16 = (signed char)-23;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 4245969982U;
long long int var_20 = -2396004219422642001LL;
unsigned short var_21 = (unsigned short)65447;
int var_22 = 617637281;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
_Bool arr_3 [10] [10] [10] ;
short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 9045810793462025706ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 549245202;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-14985;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
