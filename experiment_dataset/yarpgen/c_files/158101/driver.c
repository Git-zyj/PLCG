#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned char var_2 = (unsigned char)226;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_14 = 761819581513023419LL;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
signed char var_16 = (signed char)114;
signed char var_17 = (signed char)-73;
short var_18 = (short)-14594;
unsigned long long int var_19 = 4839865448567256032ULL;
unsigned short var_20 = (unsigned short)65058;
_Bool var_21 = (_Bool)0;
unsigned short arr_0 [17] ;
signed char arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] ;
signed char arr_3 [17] ;
unsigned char arr_4 [17] ;
unsigned int arr_6 [17] ;
unsigned long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)25919;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 394621526U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3960999904U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 11818526410098315902ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
