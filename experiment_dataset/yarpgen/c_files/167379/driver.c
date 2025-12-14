#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4878000828184416273LL;
unsigned int var_5 = 3537774697U;
unsigned int var_6 = 1724938706U;
signed char var_8 = (signed char)-19;
unsigned int var_9 = 2553359092U;
int zero = 0;
unsigned short var_12 = (unsigned short)21396;
_Bool var_13 = (_Bool)1;
short var_14 = (short)23749;
long long int var_15 = 8018415099865563382LL;
short var_16 = (short)18243;
unsigned short var_17 = (unsigned short)35564;
short var_18 = (short)18561;
signed char var_19 = (signed char)95;
unsigned short arr_2 [22] [22] [22] ;
unsigned int arr_6 [24] ;
unsigned short arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)33544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4068545043U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)39316;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
