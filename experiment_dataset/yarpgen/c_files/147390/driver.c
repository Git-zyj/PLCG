#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3690930145653413010LL;
unsigned short var_1 = (unsigned short)18297;
signed char var_3 = (signed char)-114;
long long int var_4 = 408559671962853954LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)154;
unsigned short var_8 = (unsigned short)29548;
unsigned long long int var_9 = 10272183781442852753ULL;
long long int var_12 = 8429371128547717071LL;
int var_13 = -1523539890;
short var_14 = (short)24498;
int zero = 0;
long long int var_15 = -7989932388038919400LL;
short var_16 = (short)29249;
unsigned int var_17 = 1075424574U;
long long int var_18 = 2985014935178465217LL;
signed char var_19 = (signed char)-39;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5788365101150186730LL;
unsigned long long int var_22 = 13487615953369387349ULL;
unsigned char arr_0 [21] ;
long long int arr_4 [21] ;
unsigned int arr_12 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 8050962116428551383LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 868157000U : 536697328U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
