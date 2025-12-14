#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 184162433;
unsigned char var_1 = (unsigned char)98;
unsigned char var_2 = (unsigned char)87;
int var_3 = 1370360336;
unsigned int var_5 = 2459226826U;
short var_10 = (short)-16545;
unsigned long long int var_11 = 11828206694239319164ULL;
int var_12 = -1110419426;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -888156124;
_Bool var_15 = (_Bool)1;
_Bool arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
long long int arr_4 [21] [21] ;
unsigned short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 11639736806264256633ULL : 2919691543788744417ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -6228058350582530543LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63041 : (unsigned short)39481;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
