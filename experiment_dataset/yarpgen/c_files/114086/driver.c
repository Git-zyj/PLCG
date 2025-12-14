#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20952;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6526689720280140122LL;
unsigned int var_12 = 4013378374U;
int var_13 = -101872761;
long long int var_14 = -2808451294217208117LL;
unsigned char var_15 = (unsigned char)23;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 4445101228054340029LL;
unsigned long long int var_19 = 4733714756514624536ULL;
unsigned short var_20 = (unsigned short)16614;
short var_21 = (short)-3403;
unsigned long long int var_22 = 10033450699082412131ULL;
_Bool arr_3 [13] [13] [13] ;
long long int arr_11 [18] [18] ;
short arr_12 [18] ;
unsigned char arr_14 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = -341354502240506438LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)-25836;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)88;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
