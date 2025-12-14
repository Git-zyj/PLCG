#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1595339015U;
unsigned long long int var_1 = 6640113963887242824ULL;
int var_2 = -127143239;
unsigned int var_3 = 659206542U;
unsigned short var_8 = (unsigned short)31603;
unsigned char var_9 = (unsigned char)158;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3077780607U;
_Bool var_13 = (_Bool)0;
unsigned int var_17 = 667467189U;
int zero = 0;
short var_19 = (short)28933;
unsigned long long int var_20 = 3475064001596689295ULL;
short var_21 = (short)13212;
signed char var_22 = (signed char)-115;
unsigned int var_23 = 2170513411U;
unsigned int var_24 = 3477373843U;
unsigned long long int var_25 = 11037624317461293637ULL;
unsigned int arr_2 [19] ;
unsigned long long int arr_3 [20] [20] ;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2423346970U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 17859798919281319749ULL : 9851986903369769728ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)28079;
}

void checksum() {
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
