#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1556195220;
int var_4 = 1748493964;
unsigned int var_9 = 1556384617U;
unsigned short var_13 = (unsigned short)15204;
long long int var_14 = 1584518647767509744LL;
unsigned long long int var_16 = 16896506703795504099ULL;
int zero = 0;
unsigned int var_17 = 192392151U;
unsigned short var_18 = (unsigned short)55807;
unsigned long long int var_19 = 15692766513531590414ULL;
unsigned short var_20 = (unsigned short)51455;
unsigned short var_21 = (unsigned short)31723;
int var_22 = -295642170;
_Bool var_23 = (_Bool)0;
int var_24 = -1522908036;
_Bool var_25 = (_Bool)0;
unsigned int arr_0 [25] ;
signed char arr_2 [25] ;
unsigned long long int arr_6 [25] [25] ;
unsigned char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1841609520U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1484752387015874303ULL : 651935660954053215ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned char)80;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
