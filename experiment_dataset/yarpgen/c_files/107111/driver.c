#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3344328742718371353ULL;
unsigned long long int var_3 = 6172731952793037064ULL;
unsigned long long int var_5 = 13419224906130485649ULL;
unsigned long long int var_8 = 12528669626641994637ULL;
short var_9 = (short)11013;
int zero = 0;
short var_10 = (short)-29103;
long long int var_11 = -895295600197383272LL;
int var_12 = 2036299622;
unsigned int var_13 = 780531940U;
unsigned int var_14 = 2735531228U;
unsigned int var_15 = 2136142986U;
long long int var_16 = 4026814468431433722LL;
unsigned int var_17 = 4007748200U;
unsigned int arr_0 [22] ;
int arr_3 [22] ;
long long int arr_5 [22] [22] ;
short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2798203054U : 1636295171U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 673659985 : 2144944416;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -5951550052698966683LL : 1706351455597183306LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)6221 : (short)24387;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
