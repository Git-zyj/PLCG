#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46082;
_Bool var_1 = (_Bool)0;
long long int var_2 = -1795231951693515870LL;
long long int var_3 = -8742137613087764175LL;
unsigned char var_4 = (unsigned char)218;
unsigned long long int var_9 = 5854305121248639885ULL;
unsigned int var_10 = 2940918070U;
unsigned char var_11 = (unsigned char)193;
unsigned char var_15 = (unsigned char)128;
long long int var_18 = 670066742549709493LL;
unsigned int var_19 = 2475102904U;
int zero = 0;
long long int var_20 = -66852840090890018LL;
unsigned int var_21 = 2150208183U;
short var_22 = (short)9276;
unsigned int var_23 = 3835493817U;
unsigned char var_24 = (unsigned char)112;
unsigned int var_25 = 2539876971U;
long long int arr_1 [13] ;
unsigned int arr_5 [13] [13] ;
short arr_7 [21] ;
short arr_8 [21] ;
unsigned char arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 6399191704954263087LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 2468143825U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-15346;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)15245;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
