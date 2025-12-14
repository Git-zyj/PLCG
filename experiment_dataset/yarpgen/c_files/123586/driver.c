#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8797379090572314172LL;
unsigned long long int var_1 = 9254231022399307412ULL;
unsigned long long int var_3 = 10776769926005323315ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4432904678087099056LL;
int var_7 = -923504993;
unsigned long long int var_9 = 690669802282028722ULL;
signed char var_10 = (signed char)58;
int zero = 0;
int var_11 = -970896891;
unsigned int var_12 = 1003068016U;
unsigned int var_13 = 3463003347U;
signed char var_14 = (signed char)5;
unsigned int var_15 = 1613868528U;
_Bool var_16 = (_Bool)1;
unsigned short arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
long long int arr_2 [25] ;
signed char arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)2466;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 6309031434707993326LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-100;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
