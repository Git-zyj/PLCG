#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7132207680359454043ULL;
signed char var_4 = (signed char)-56;
unsigned int var_10 = 3499846699U;
unsigned char var_14 = (unsigned char)237;
signed char var_15 = (signed char)19;
unsigned char var_16 = (unsigned char)131;
unsigned char var_17 = (unsigned char)226;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-29;
unsigned int var_20 = 2282715520U;
unsigned char var_21 = (unsigned char)166;
unsigned char var_22 = (unsigned char)76;
long long int var_23 = -506383028508555726LL;
unsigned char var_24 = (unsigned char)25;
unsigned long long int var_25 = 14991038083291393129ULL;
signed char arr_1 [12] ;
unsigned char arr_3 [16] ;
unsigned char arr_4 [16] ;
long long int arr_2 [12] ;
signed char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -2917186180057671261LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)112;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
