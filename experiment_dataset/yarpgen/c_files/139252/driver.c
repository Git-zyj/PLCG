#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14400;
int var_1 = 1778495828;
int var_3 = 548124574;
unsigned long long int var_4 = 17062866372946476110ULL;
unsigned short var_6 = (unsigned short)38816;
signed char var_7 = (signed char)-110;
short var_8 = (short)30244;
unsigned int var_11 = 2746315021U;
long long int var_12 = -5531721809654983051LL;
signed char var_13 = (signed char)-77;
int zero = 0;
signed char var_16 = (signed char)-62;
short var_17 = (short)27492;
signed char var_18 = (signed char)104;
unsigned char var_19 = (unsigned char)85;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-29775;
int var_22 = -1363969793;
unsigned short arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
signed char arr_5 [14] ;
signed char arr_7 [14] [14] [14] ;
short arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56878 : (unsigned short)5647;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)-1195;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
