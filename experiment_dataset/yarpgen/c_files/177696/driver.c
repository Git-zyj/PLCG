#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26215;
int var_3 = -293855875;
_Bool var_4 = (_Bool)1;
long long int var_5 = 6928862033445220478LL;
unsigned long long int var_6 = 16826088710926769978ULL;
unsigned long long int var_7 = 2763061289580615300ULL;
short var_8 = (short)-10204;
long long int var_9 = 6299539934264258870LL;
long long int var_10 = -6363823113667547551LL;
unsigned short var_11 = (unsigned short)6771;
int var_12 = -654532681;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-34;
int zero = 0;
unsigned char var_17 = (unsigned char)83;
unsigned int var_18 = 511552887U;
int var_19 = -1876156389;
unsigned long long int var_20 = 2794284789744688751ULL;
unsigned short var_21 = (unsigned short)45986;
int var_22 = 991187557;
unsigned short arr_6 [24] ;
unsigned short arr_19 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)13972;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16528 : (unsigned short)27044;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
