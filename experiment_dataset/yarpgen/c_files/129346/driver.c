#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7840;
int var_1 = -1882515394;
unsigned long long int var_5 = 7486846295195641549ULL;
unsigned int var_6 = 21271641U;
long long int var_10 = 7144589004203226725LL;
unsigned int var_11 = 3336034580U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)13391;
int zero = 0;
long long int var_15 = 1516973514151250666LL;
int var_16 = 1677141784;
unsigned short var_17 = (unsigned short)59271;
short var_18 = (short)-18464;
long long int var_19 = 4306592725456378924LL;
unsigned long long int var_20 = 2564113087401719115ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-29907;
unsigned char var_23 = (unsigned char)218;
long long int var_24 = 2610145325608781363LL;
long long int var_25 = 8625756664399381496LL;
signed char arr_0 [18] ;
unsigned short arr_2 [18] ;
short arr_3 [11] ;
short arr_4 [11] ;
long long int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)36685;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-31032;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-7100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -3587686284830965249LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
