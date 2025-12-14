#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11555905014084985520ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-51;
unsigned int var_3 = 3615703822U;
unsigned char var_4 = (unsigned char)94;
short var_5 = (short)-15085;
short var_6 = (short)20179;
unsigned short var_8 = (unsigned short)35392;
unsigned long long int var_9 = 2280058592183219944ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)23996;
unsigned long long int var_11 = 3990916747179874415ULL;
int var_12 = -2090560227;
signed char var_13 = (signed char)112;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
short arr_0 [20] [20] ;
short arr_2 [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)27587;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)4638;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 7218872421347173719LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
