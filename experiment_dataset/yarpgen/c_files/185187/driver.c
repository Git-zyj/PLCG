#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55723;
unsigned char var_9 = (unsigned char)186;
unsigned char var_10 = (unsigned char)31;
unsigned int var_12 = 2112470275U;
int var_13 = 447573324;
unsigned char var_15 = (unsigned char)28;
unsigned int var_16 = 3830577027U;
int zero = 0;
long long int var_17 = 7324276419449891054LL;
int var_18 = -1972669095;
signed char var_19 = (signed char)-102;
unsigned long long int var_20 = 9710951522553500003ULL;
unsigned long long int var_21 = 10034304295132475582ULL;
signed char var_22 = (signed char)50;
unsigned short var_23 = (unsigned short)9000;
long long int var_24 = 7171260563303151899LL;
long long int arr_0 [23] ;
_Bool arr_1 [23] [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -8892247738255783432LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 15405166068516304744ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-32539;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
