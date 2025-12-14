#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4889857365966556194LL;
unsigned long long int var_4 = 4211119478997581738ULL;
signed char var_6 = (signed char)-47;
long long int var_8 = 4236593003814212660LL;
unsigned char var_9 = (unsigned char)192;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-1172;
unsigned int var_14 = 1016300667U;
int var_15 = -184323774;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11343203339502155611ULL;
int var_18 = 1978013754;
int arr_0 [17] ;
int arr_2 [17] [17] ;
unsigned char arr_4 [17] ;
short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -920642998;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 2146289181 : 956170609;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-10113 : (short)30777;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
