#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-90;
unsigned long long int var_3 = 8974537200109792846ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)80;
unsigned long long int var_10 = 4116615118432367401ULL;
unsigned char var_13 = (unsigned char)103;
int zero = 0;
unsigned short var_17 = (unsigned short)60534;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6846487452986847841LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-12366;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)236;
_Bool arr_1 [17] ;
unsigned long long int arr_6 [20] ;
unsigned int arr_4 [17] [17] ;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 13794385974794731302ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2623000631U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)114;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
