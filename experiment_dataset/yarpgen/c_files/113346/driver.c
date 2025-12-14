#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17359812591285233370ULL;
unsigned long long int var_2 = 12399818488656155636ULL;
signed char var_3 = (signed char)6;
unsigned long long int var_4 = 6142721637663269251ULL;
long long int var_5 = 4426927777153259573LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6159612130994329304ULL;
int zero = 0;
unsigned int var_10 = 4232026755U;
short var_11 = (short)-32572;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2408496243U;
signed char var_14 = (signed char)50;
unsigned int arr_0 [11] ;
unsigned long long int arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 339313391U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 6031663737864675145ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 16865816176775005245ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
