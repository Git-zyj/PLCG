#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3928367647175844991LL;
int var_1 = 1070682908;
signed char var_2 = (signed char)-24;
signed char var_4 = (signed char)100;
unsigned int var_5 = 306744474U;
long long int var_7 = -8170341833292230014LL;
int var_8 = 893705162;
unsigned int var_9 = 1773791156U;
long long int var_11 = -5126390426381297601LL;
int zero = 0;
short var_12 = (short)-32582;
short var_13 = (short)-28695;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-107;
signed char var_16 = (signed char)-113;
int var_17 = 1863191831;
unsigned long long int var_18 = 3764342862964249043ULL;
int var_19 = -1280724677;
unsigned char var_20 = (unsigned char)171;
unsigned int arr_0 [17] ;
long long int arr_1 [17] [17] ;
short arr_2 [10] [10] ;
signed char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4189431282U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 3541973382964913464LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18696;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)99;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
