#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1696164212076394603ULL;
unsigned int var_2 = 1117827070U;
_Bool var_3 = (_Bool)1;
long long int var_7 = -4525347662786115860LL;
unsigned char var_8 = (unsigned char)65;
_Bool var_10 = (_Bool)1;
int var_11 = 1892429491;
int zero = 0;
unsigned short var_13 = (unsigned short)24062;
unsigned char var_14 = (unsigned char)72;
unsigned int var_15 = 511030323U;
unsigned long long int var_16 = 8191173247521868871ULL;
unsigned long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_5 [22] ;
long long int arr_7 [12] ;
unsigned int arr_9 [12] ;
unsigned long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 631096042257783319ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 13920913080184464336ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)62758;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 11859676889258293180ULL : 12833754863709804490ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -5264918914918602089LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 3853749165U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 9229581421357116037ULL : 12522713412604646840ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
