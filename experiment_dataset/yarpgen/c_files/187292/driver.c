#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -21628358;
long long int var_6 = 815006799693481796LL;
unsigned long long int var_8 = 7814611072446343957ULL;
signed char var_9 = (signed char)77;
int var_11 = 1701992516;
signed char var_14 = (signed char)67;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_18 = -2048217372;
unsigned char var_19 = (unsigned char)113;
unsigned int var_20 = 1116338143U;
unsigned long long int var_21 = 5111013494654275554ULL;
unsigned char arr_0 [19] ;
unsigned short arr_1 [19] ;
int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)20470;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2050191322;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
