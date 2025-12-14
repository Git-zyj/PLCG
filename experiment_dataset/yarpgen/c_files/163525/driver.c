#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
long long int var_2 = -492284438831450967LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15284292369792119604ULL;
int var_9 = 942747455;
unsigned int var_11 = 3264444060U;
long long int var_12 = -2486207016501087056LL;
unsigned short var_14 = (unsigned short)64895;
signed char var_16 = (signed char)22;
int zero = 0;
long long int var_18 = -4252063241962946309LL;
unsigned long long int var_19 = 5441766960756457042ULL;
short var_20 = (short)13224;
_Bool arr_0 [19] ;
unsigned char arr_2 [19] ;
long long int arr_6 [19] ;
signed char arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 8216081983639832483LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
