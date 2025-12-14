#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12055;
signed char var_3 = (signed char)-76;
long long int var_6 = 7397946189460187198LL;
short var_11 = (short)26225;
unsigned int var_13 = 2473744332U;
int zero = 0;
long long int var_14 = -7066921478264165258LL;
long long int var_15 = 6284853400658373953LL;
signed char var_16 = (signed char)90;
unsigned short var_17 = (unsigned short)9732;
long long int var_18 = -6156481472489156771LL;
short var_19 = (short)-19551;
short var_20 = (short)28998;
int var_21 = -1270306676;
long long int var_22 = 1095454264114857492LL;
short arr_4 [10] [10] [10] ;
unsigned long long int arr_8 [10] ;
unsigned long long int arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-14049;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 14814713511887787796ULL : 6269961043379671722ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 12115858738659435914ULL : 3262375025616576771ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
