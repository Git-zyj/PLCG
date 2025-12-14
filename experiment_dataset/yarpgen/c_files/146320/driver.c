#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
_Bool var_2 = (_Bool)1;
signed char var_8 = (signed char)-61;
signed char var_12 = (signed char)125;
int zero = 0;
unsigned int var_14 = 691752280U;
unsigned long long int var_15 = 15274095590610919797ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)203;
unsigned long long int var_18 = 524682241623116124ULL;
_Bool var_19 = (_Bool)0;
int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1107523191;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
