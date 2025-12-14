#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7703126338508841541LL;
unsigned int var_3 = 993903403U;
unsigned char var_4 = (unsigned char)168;
signed char var_5 = (signed char)113;
unsigned char var_6 = (unsigned char)103;
signed char var_7 = (signed char)-9;
unsigned long long int var_8 = 2396249575954113033ULL;
int zero = 0;
signed char var_11 = (signed char)-40;
long long int var_12 = -7946927891317461453LL;
unsigned int var_13 = 333939750U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4036519958U;
unsigned long long int var_16 = 5461866880218655850ULL;
unsigned char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned char arr_2 [15] ;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13829866687358171196ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)12;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
