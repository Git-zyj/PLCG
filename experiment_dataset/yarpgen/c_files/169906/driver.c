#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 921720813;
int var_1 = 1507117355;
unsigned int var_2 = 2640172907U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 512493868U;
short var_11 = (short)9448;
unsigned short var_12 = (unsigned short)2923;
long long int var_13 = 3562809722617780074LL;
unsigned long long int var_14 = 9058639071214067560ULL;
int zero = 0;
long long int var_17 = 4732203073569581228LL;
short var_18 = (short)13504;
unsigned char var_19 = (unsigned char)177;
unsigned short var_20 = (unsigned short)9649;
short var_21 = (short)24037;
short arr_3 [15] ;
unsigned int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)30139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1255885720U : 4138006914U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
