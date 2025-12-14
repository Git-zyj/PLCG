#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)105;
unsigned long long int var_4 = 1912188123119653654ULL;
signed char var_6 = (signed char)1;
signed char var_7 = (signed char)-31;
unsigned char var_9 = (unsigned char)136;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)83;
long long int var_14 = 8810092481489294380LL;
unsigned long long int var_15 = 9970031443256202784ULL;
unsigned int var_16 = 3242366639U;
unsigned long long int arr_1 [25] ;
short arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
signed char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 17824216360709864373ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-9292;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3038805625U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-99;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
