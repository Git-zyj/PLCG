#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16214;
long long int var_4 = 1185438255073308621LL;
unsigned int var_9 = 813344015U;
unsigned short var_11 = (unsigned short)37147;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1176874477U;
unsigned int var_15 = 2864191141U;
int zero = 0;
short var_16 = (short)9308;
short var_17 = (short)-11810;
signed char var_18 = (signed char)-63;
unsigned int var_19 = 2120920403U;
signed char var_20 = (signed char)57;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3725267079483970089LL;
int var_23 = -186157293;
_Bool arr_2 [15] ;
short arr_3 [15] [15] [15] ;
long long int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)1145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 2289025692206200209LL : 1924004057395534719LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
