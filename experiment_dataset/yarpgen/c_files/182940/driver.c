#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1689532812U;
signed char var_1 = (signed char)-41;
unsigned char var_2 = (unsigned char)78;
long long int var_3 = -5900514333075958774LL;
signed char var_5 = (signed char)57;
int var_6 = 731470228;
_Bool var_7 = (_Bool)1;
short var_8 = (short)6029;
signed char var_9 = (signed char)-66;
unsigned short var_10 = (unsigned short)33152;
long long int var_14 = -1429915499863270987LL;
unsigned char var_15 = (unsigned char)254;
unsigned long long int var_16 = 1794849601620532110ULL;
unsigned int var_19 = 2321429116U;
int zero = 0;
signed char var_20 = (signed char)-13;
unsigned char var_21 = (unsigned char)247;
unsigned short var_22 = (unsigned short)45684;
long long int var_23 = 249444649398681279LL;
long long int var_24 = 8953761416865637675LL;
unsigned short arr_0 [20] ;
short arr_1 [20] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)27606;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-3094;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
