#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
int var_1 = -234333286;
unsigned long long int var_3 = 6873466039555777143ULL;
unsigned short var_4 = (unsigned short)64411;
short var_6 = (short)18017;
short var_8 = (short)21646;
unsigned short var_9 = (unsigned short)54779;
unsigned char var_11 = (unsigned char)202;
signed char var_14 = (signed char)-76;
unsigned long long int var_16 = 10443523496565555757ULL;
unsigned short var_17 = (unsigned short)44813;
int zero = 0;
unsigned int var_18 = 2976458243U;
short var_19 = (short)23376;
signed char var_20 = (signed char)-27;
signed char var_21 = (signed char)100;
int arr_0 [13] ;
signed char arr_3 [13] ;
int arr_4 [13] [13] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1496641897;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -39132347;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)1066;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
