#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48880;
short var_1 = (short)19732;
unsigned short var_2 = (unsigned short)37318;
unsigned short var_3 = (unsigned short)57847;
long long int var_5 = 7043855718480180053LL;
unsigned char var_6 = (unsigned char)165;
short var_8 = (short)2397;
long long int var_10 = -7654698400111132560LL;
short var_11 = (short)13212;
unsigned long long int var_13 = 2677751599209953577ULL;
short var_15 = (short)-3486;
short var_16 = (short)-24875;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
unsigned int var_18 = 2118792792U;
int var_19 = 1133282897;
short var_20 = (short)-30869;
_Bool var_21 = (_Bool)1;
long long int var_22 = -1788921627945560642LL;
int arr_0 [17] [17] ;
_Bool arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 164140669;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
