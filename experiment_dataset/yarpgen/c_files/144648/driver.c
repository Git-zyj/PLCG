#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13534141638457897684ULL;
unsigned short var_1 = (unsigned short)32098;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)161;
long long int var_5 = -8162314917586860346LL;
long long int var_6 = 3847074730472376396LL;
unsigned short var_7 = (unsigned short)24114;
signed char var_8 = (signed char)46;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2583117678U;
int zero = 0;
short var_13 = (short)-15578;
signed char var_14 = (signed char)-96;
unsigned long long int var_15 = 4952626087274000023ULL;
unsigned long long int var_16 = 11706261863896119201ULL;
_Bool var_17 = (_Bool)0;
unsigned short arr_0 [25] ;
signed char arr_1 [25] ;
long long int arr_5 [25] [25] ;
unsigned long long int arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)61036;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 4846189632226533830LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 14037632019597584534ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
