#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18140270203867751502ULL;
unsigned char var_3 = (unsigned char)74;
unsigned char var_4 = (unsigned char)132;
signed char var_6 = (signed char)-31;
_Bool var_7 = (_Bool)0;
long long int var_9 = -3569364298733269483LL;
signed char var_11 = (signed char)29;
long long int var_12 = 7354989705988654772LL;
int zero = 0;
unsigned long long int var_13 = 14278376317165285303ULL;
long long int var_14 = -3984193118698433559LL;
long long int var_15 = 3708513591685572667LL;
unsigned long long int var_16 = 2023526574812001408ULL;
unsigned char var_17 = (unsigned char)1;
long long int var_18 = 4708783121309448620LL;
unsigned char arr_0 [16] ;
unsigned long long int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)77 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4542999245973000462ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
