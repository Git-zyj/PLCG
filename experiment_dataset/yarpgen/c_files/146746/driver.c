#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14539727127638617227ULL;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)22;
signed char var_4 = (signed char)-118;
_Bool var_5 = (_Bool)0;
short var_6 = (short)1337;
signed char var_7 = (signed char)79;
int var_8 = -1265421770;
int zero = 0;
unsigned long long int var_10 = 4958588379403074440ULL;
int var_11 = 1584805664;
unsigned char var_12 = (unsigned char)70;
int var_13 = 1636952127;
unsigned long long int var_14 = 4345293703802727171ULL;
unsigned char arr_2 [24] [24] ;
signed char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-41;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
