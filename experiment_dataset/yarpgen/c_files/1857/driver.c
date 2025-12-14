#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41967;
signed char var_2 = (signed char)-83;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 5991883509275834861ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 2653290130762401798ULL;
unsigned short var_9 = (unsigned short)39239;
int zero = 0;
int var_10 = 843070066;
unsigned long long int var_11 = 16228223560569804357ULL;
unsigned short var_12 = (unsigned short)18439;
short var_13 = (short)12119;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)5;
unsigned short arr_7 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59947;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
