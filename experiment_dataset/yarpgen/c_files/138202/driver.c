#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned long long int var_2 = 5413608468237459739ULL;
unsigned int var_3 = 2192800710U;
unsigned int var_4 = 2616500315U;
signed char var_5 = (signed char)-109;
signed char var_6 = (signed char)-123;
unsigned char var_7 = (unsigned char)68;
unsigned short var_9 = (unsigned short)5786;
unsigned int var_10 = 464225177U;
int zero = 0;
signed char var_11 = (signed char)-86;
signed char var_12 = (signed char)17;
signed char var_13 = (signed char)87;
unsigned int var_14 = 330561500U;
unsigned char var_15 = (unsigned char)35;
int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
unsigned int arr_2 [15] ;
int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -247033583;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 13932618051422488961ULL : 16958656916106941666ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3091979075U : 2392228956U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1406091258 : 1683047052;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
