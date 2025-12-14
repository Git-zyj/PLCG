#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-113;
unsigned long long int var_5 = 4179045381578837089ULL;
unsigned char var_6 = (unsigned char)94;
long long int var_7 = 5514390424357048133LL;
unsigned int var_8 = 3927151501U;
signed char var_10 = (signed char)-62;
short var_11 = (short)-21774;
long long int var_14 = -9175608790562894423LL;
int zero = 0;
short var_17 = (short)-15016;
long long int var_18 = 6579481942723824189LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11528305354218501017ULL;
signed char arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned int arr_5 [18] [18] ;
_Bool arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42919 : (unsigned short)46908;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)15088;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 857485656U : 1873191353U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
