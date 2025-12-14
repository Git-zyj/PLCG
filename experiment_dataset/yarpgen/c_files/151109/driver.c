#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
unsigned long long int var_5 = 3462032806327281495ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 596384770;
int zero = 0;
unsigned short var_11 = (unsigned short)54648;
int var_12 = 1306131364;
unsigned long long int var_13 = 10856793915181411888ULL;
unsigned char var_14 = (unsigned char)149;
unsigned long long int var_15 = 11629597219017974015ULL;
short var_16 = (short)-16785;
int var_17 = 1622930483;
unsigned int var_18 = 3538862434U;
unsigned int var_19 = 703402276U;
unsigned int var_20 = 1456283761U;
unsigned short arr_4 [25] ;
unsigned long long int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)40932;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 17257018498881564009ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
