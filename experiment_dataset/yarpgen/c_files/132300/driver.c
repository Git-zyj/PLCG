#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 255500885U;
short var_6 = (short)-25299;
unsigned short var_7 = (unsigned short)60859;
short var_9 = (short)-29520;
signed char var_10 = (signed char)101;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-72;
int zero = 0;
unsigned long long int var_19 = 15739634570642625683ULL;
long long int var_20 = -9110712228241807200LL;
unsigned long long int var_21 = 11874008627300630841ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 17163233832232695658ULL;
_Bool arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
