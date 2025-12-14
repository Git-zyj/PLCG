#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)15359;
unsigned long long int var_5 = 7242911857281669033ULL;
unsigned long long int var_12 = 9509349687320471740ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)40418;
unsigned long long int var_14 = 16825383625988144407ULL;
unsigned short var_15 = (unsigned short)41788;
unsigned short var_16 = (unsigned short)43380;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1555022930U;
unsigned short var_19 = (unsigned short)36495;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned short arr_3 [10] [10] [10] ;
long long int arr_4 [10] [10] [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 15264007253461090142ULL : 14815519405363961051ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 13065493580734391493ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 15355434151139912205ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)10881 : (unsigned short)30948;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 7350977040568455870LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 16293999824914764885ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
