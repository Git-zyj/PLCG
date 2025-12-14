#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7860845648338633346LL;
short var_1 = (short)-26267;
signed char var_2 = (signed char)-17;
signed char var_3 = (signed char)-73;
signed char var_4 = (signed char)111;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)27718;
int var_8 = -878366075;
int var_9 = -1902796016;
long long int var_11 = -8920928893592385956LL;
long long int var_13 = 7945438212249008969LL;
short var_15 = (short)4539;
int zero = 0;
signed char var_17 = (signed char)-34;
int var_18 = -1824475611;
long long int var_19 = 1717738012034608013LL;
short var_20 = (short)29670;
int arr_3 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1087140792 : -1624755911;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)-4;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
