#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2923150393U;
unsigned int var_5 = 833652716U;
unsigned int var_7 = 4133258886U;
signed char var_8 = (signed char)119;
unsigned char var_9 = (unsigned char)240;
signed char var_10 = (signed char)57;
unsigned long long int var_13 = 306960966005824243ULL;
signed char var_16 = (signed char)-101;
unsigned int var_17 = 3238130620U;
unsigned long long int var_18 = 6858380770837601370ULL;
int zero = 0;
unsigned int var_20 = 514790614U;
signed char var_21 = (signed char)9;
unsigned short var_22 = (unsigned short)49720;
unsigned long long int var_23 = 12985423312454395398ULL;
short arr_0 [25] ;
signed char arr_1 [25] [25] ;
_Bool arr_2 [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-1746;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)71;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
