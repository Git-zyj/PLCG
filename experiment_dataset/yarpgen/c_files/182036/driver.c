#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)32352;
long long int var_3 = -9013470527687068345LL;
unsigned int var_8 = 1069166179U;
unsigned short var_9 = (unsigned short)15784;
unsigned short var_10 = (unsigned short)29256;
unsigned long long int var_13 = 3099633839763421886ULL;
long long int var_14 = -5247519755900461951LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5088240990957713336LL;
int zero = 0;
unsigned short var_18 = (unsigned short)59223;
long long int var_19 = -2005922998739062508LL;
int var_20 = -340501219;
int var_21 = -1741516967;
long long int var_22 = 8304250034830014625LL;
long long int var_23 = -918872591903801789LL;
int arr_2 [16] [16] ;
long long int arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned int arr_5 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -2105530842;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -6991710623412894713LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 16243515595000799795ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1057906350U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
