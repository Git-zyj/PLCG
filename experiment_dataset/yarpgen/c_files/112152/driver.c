#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10296;
int var_1 = -1006620130;
unsigned int var_2 = 2992340752U;
unsigned int var_3 = 1433681787U;
unsigned char var_4 = (unsigned char)22;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)124;
unsigned long long int var_8 = 12547834161078308183ULL;
unsigned short var_9 = (unsigned short)40093;
unsigned long long int var_11 = 3862358309509251037ULL;
short var_12 = (short)26276;
long long int var_13 = -6410240712690516349LL;
int var_14 = -1005198556;
unsigned int var_15 = 1565277243U;
unsigned int var_16 = 1105496017U;
signed char var_17 = (signed char)-93;
int zero = 0;
unsigned char var_19 = (unsigned char)11;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 17713556227916569757ULL;
unsigned int var_22 = 1387949542U;
signed char var_23 = (signed char)-33;
short var_24 = (short)8983;
unsigned long long int var_25 = 1232507003012816064ULL;
unsigned long long int arr_5 [17] [17] [17] ;
int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1409105839363343975ULL : 10942276340000521276ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -147530397 : 658904081;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
