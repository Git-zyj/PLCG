#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4597103738497225802ULL;
int var_1 = 955328789;
_Bool var_4 = (_Bool)1;
long long int var_5 = 7011985675797552477LL;
long long int var_6 = 1581073576610749276LL;
unsigned long long int var_7 = 8081231468268056826ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)8984;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 4188069875849975562ULL;
unsigned long long int var_15 = 17356468877280879311ULL;
int zero = 0;
long long int var_17 = 6912047406504016396LL;
unsigned long long int var_18 = 1459048785981936193ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)9;
signed char var_22 = (signed char)-103;
_Bool var_23 = (_Bool)0;
long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 4127593258690970785LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 9912225384895079944ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 678403383658482588ULL : 3552385242915106472ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
