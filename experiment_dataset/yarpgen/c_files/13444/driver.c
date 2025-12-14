#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1901471165;
unsigned short var_1 = (unsigned short)21102;
unsigned int var_2 = 3778303075U;
unsigned long long int var_3 = 16819390976184361113ULL;
unsigned char var_6 = (unsigned char)100;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -1252717724502111569LL;
signed char var_11 = (signed char)57;
short var_12 = (short)6669;
int var_13 = 1209059045;
int var_14 = -1667609596;
int var_15 = 243702705;
signed char var_16 = (signed char)-44;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-34;
_Bool arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
