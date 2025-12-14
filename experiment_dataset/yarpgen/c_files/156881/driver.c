#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
int var_1 = 1581009806;
unsigned char var_2 = (unsigned char)3;
int var_3 = 5810146;
unsigned long long int var_4 = 4574801272007923575ULL;
signed char var_5 = (signed char)-117;
unsigned long long int var_6 = 2826088271736746761ULL;
long long int var_7 = 5787287206025653064LL;
int var_8 = -715759970;
unsigned int var_9 = 1133204476U;
unsigned short var_10 = (unsigned short)64680;
int var_11 = 1331719329;
unsigned int var_12 = 1839281672U;
short var_13 = (short)10361;
long long int var_14 = 4347106485388669331LL;
unsigned short var_15 = (unsigned short)6799;
unsigned short var_16 = (unsigned short)62227;
int zero = 0;
long long int var_17 = 4187126315182180304LL;
unsigned int var_18 = 825633592U;
unsigned int var_19 = 1154380978U;
unsigned short var_20 = (unsigned short)12372;
signed char var_21 = (signed char)-116;
unsigned int var_22 = 3751181676U;
signed char var_23 = (signed char)63;
int var_24 = 1904042591;
unsigned short arr_0 [10] ;
short arr_1 [10] [10] ;
unsigned short arr_2 [10] [10] ;
unsigned int arr_3 [10] [10] [10] ;
unsigned int arr_4 [10] ;
_Bool arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)18449;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-31515;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)26182;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1759519002U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2073720316U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
