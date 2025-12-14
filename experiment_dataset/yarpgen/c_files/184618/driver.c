#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43658;
unsigned int var_8 = 3773520016U;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)5859;
unsigned short var_11 = (unsigned short)27319;
unsigned int var_12 = 3487665475U;
unsigned char var_13 = (unsigned char)174;
unsigned long long int var_14 = 17337749195868219035ULL;
unsigned long long int arr_1 [25] ;
short arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7134452348661743426ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)12572;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
