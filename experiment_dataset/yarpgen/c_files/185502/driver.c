#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
int var_1 = 1682129581;
unsigned long long int var_4 = 2732044827377570781ULL;
short var_5 = (short)-16000;
_Bool var_6 = (_Bool)1;
short var_7 = (short)16333;
int var_10 = 1362752243;
int var_11 = 1745740039;
int var_12 = -57263344;
signed char var_13 = (signed char)-33;
int var_14 = 2145323777;
int zero = 0;
int var_17 = 2095505846;
int var_18 = -1271106194;
int var_19 = 734731222;
signed char var_20 = (signed char)-76;
signed char var_21 = (signed char)-26;
short arr_7 [22] [22] [22] ;
short arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-21646;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (short)-1927;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
