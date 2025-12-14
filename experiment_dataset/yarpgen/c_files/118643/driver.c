#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 261678442256006758ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 674117520U;
signed char var_3 = (signed char)-81;
unsigned long long int var_6 = 9472824739681123155ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)13;
short var_11 = (short)32451;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)-71;
unsigned int var_16 = 2087045354U;
int zero = 0;
unsigned long long int var_18 = 12018717182328860434ULL;
signed char var_19 = (signed char)-10;
short var_20 = (short)5548;
unsigned int var_21 = 1195178564U;
unsigned long long int var_22 = 16268523748364740857ULL;
short var_23 = (short)27090;
short var_24 = (short)7720;
short arr_9 [11] [11] [11] [11] [11] ;
signed char arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)31800;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)-66;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
