#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 303478143;
signed char var_1 = (signed char)109;
int var_2 = -838599541;
short var_4 = (short)2368;
unsigned long long int var_6 = 9198192233219357155ULL;
int var_7 = 1968012178;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1535057164U;
int zero = 0;
unsigned long long int var_10 = 10308496713042688199ULL;
long long int var_11 = -7201200422272785655LL;
long long int var_12 = -2434450767350997614LL;
long long int var_13 = 4629681835102283281LL;
short var_14 = (short)2681;
signed char arr_1 [24] ;
signed char arr_5 [24] ;
signed char arr_13 [24] ;
long long int arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -5541869312772627284LL : 9055539200365695670LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
