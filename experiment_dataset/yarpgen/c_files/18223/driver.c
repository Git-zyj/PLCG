#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)0;
long long int var_4 = -1847454299554521262LL;
long long int var_5 = 7847454805151866200LL;
unsigned char var_7 = (unsigned char)114;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)27;
unsigned short var_10 = (unsigned short)24444;
int var_12 = -1653979815;
signed char var_14 = (signed char)-45;
unsigned short var_15 = (unsigned short)39199;
unsigned int var_16 = 715283704U;
int zero = 0;
signed char var_17 = (signed char)-32;
unsigned char var_18 = (unsigned char)98;
short var_19 = (short)-15967;
unsigned long long int var_20 = 18011340911624247656ULL;
unsigned char arr_1 [17] ;
long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3901089009900990841LL : -3920744618821219103LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
