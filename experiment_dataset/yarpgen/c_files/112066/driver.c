#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2275119749543880543LL;
int var_1 = -998010449;
int var_3 = -1085331844;
unsigned char var_5 = (unsigned char)217;
signed char var_6 = (signed char)-38;
unsigned int var_7 = 1892694234U;
unsigned int var_9 = 2599202143U;
short var_11 = (short)-24784;
unsigned int var_12 = 4116611694U;
unsigned int var_14 = 1486212588U;
unsigned long long int var_16 = 12978358100181507904ULL;
unsigned int var_17 = 2778376844U;
unsigned char var_19 = (unsigned char)222;
int zero = 0;
unsigned int var_20 = 982229667U;
unsigned short var_21 = (unsigned short)34610;
int var_22 = -1077472670;
long long int var_23 = -7823015559454729851LL;
int var_24 = -990330893;
_Bool var_25 = (_Bool)1;
long long int arr_1 [17] ;
int arr_3 [17] ;
int arr_4 [17] ;
long long int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -8250201869993019338LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 565018821;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1409420525;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = -6950502999404000531LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
