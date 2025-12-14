#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
unsigned long long int var_2 = 6562601758858786866ULL;
unsigned char var_3 = (unsigned char)38;
unsigned long long int var_4 = 12048477265560131784ULL;
unsigned char var_5 = (unsigned char)54;
unsigned long long int var_6 = 12043969011875855568ULL;
short var_7 = (short)2017;
signed char var_9 = (signed char)84;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)127;
unsigned short var_16 = (unsigned short)15743;
int var_17 = 1640437464;
unsigned int var_18 = 1662491532U;
long long int var_19 = 6699041348530925701LL;
unsigned long long int arr_0 [11] ;
long long int arr_1 [11] ;
short arr_2 [11] [11] [11] ;
unsigned short arr_5 [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
unsigned char arr_8 [22] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 13633439889652468032ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7242452261935849262LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)18710;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)487 : (unsigned short)63069;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1785152379194435951ULL : 3545798791071687575ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12628083439065065764ULL : 8178432423735230821ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
