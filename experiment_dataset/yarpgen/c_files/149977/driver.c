#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26456;
long long int var_1 = 712490588591481040LL;
signed char var_2 = (signed char)-7;
unsigned char var_3 = (unsigned char)177;
unsigned short var_4 = (unsigned short)4291;
unsigned long long int var_5 = 13255468760997986529ULL;
unsigned long long int var_6 = 11366949365396592283ULL;
unsigned long long int var_7 = 4608315605382246852ULL;
unsigned long long int var_8 = 16021653222331348411ULL;
int var_9 = -2122199182;
int zero = 0;
unsigned short var_10 = (unsigned short)16487;
signed char var_11 = (signed char)-41;
signed char var_12 = (signed char)22;
int var_13 = 1109589565;
unsigned int var_14 = 401353211U;
short var_15 = (short)29886;
_Bool arr_0 [23] [23] ;
unsigned short arr_4 [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)23982;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)8020;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
