#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 698126545U;
unsigned long long int var_1 = 1007742577121907052ULL;
int var_6 = -1530926788;
_Bool var_7 = (_Bool)0;
long long int var_9 = -1764208569478876252LL;
unsigned int var_11 = 1129121961U;
_Bool var_12 = (_Bool)0;
long long int var_17 = -7156321286743027286LL;
int zero = 0;
unsigned int var_18 = 2236276182U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9245280539687199606ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)109;
unsigned char arr_0 [13] ;
int arr_1 [13] ;
long long int arr_3 [13] ;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -2086583352;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3199317357564408326LL : 8018295582235372974LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 883301550 : 257154153;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
