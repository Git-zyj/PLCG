#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8072361130118761892LL;
long long int var_3 = 1946091621111660928LL;
unsigned short var_4 = (unsigned short)9771;
int var_5 = -517607261;
unsigned long long int var_6 = 4821150324940149085ULL;
unsigned short var_7 = (unsigned short)61729;
signed char var_9 = (signed char)-20;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)61693;
unsigned long long int var_12 = 17735469893920946954ULL;
int zero = 0;
unsigned long long int var_14 = 14473690568435905796ULL;
unsigned char var_15 = (unsigned char)232;
short var_16 = (short)23298;
unsigned short var_17 = (unsigned short)21029;
unsigned int var_18 = 2202983622U;
long long int var_19 = 2717194062131874237LL;
unsigned int var_20 = 189743803U;
unsigned short arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned long long int arr_2 [14] ;
unsigned long long int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)7938;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1216382027U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6576795164461557439ULL : 17008553609241319072ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2999193835219387722ULL : 7942580172526960980ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3775385637076984838ULL : 9971521778232202976ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
