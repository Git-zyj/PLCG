#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4416340478542200337LL;
unsigned long long int var_1 = 17506704246181101119ULL;
unsigned long long int var_2 = 2377251501464945486ULL;
unsigned long long int var_5 = 14938444411046687355ULL;
unsigned long long int var_6 = 8407566100041410103ULL;
unsigned long long int var_10 = 15118187014263943889ULL;
int var_11 = -1943753218;
unsigned int var_12 = 2335574173U;
int zero = 0;
int var_16 = -1366710431;
long long int var_17 = -3410644224865984393LL;
unsigned short var_18 = (unsigned short)1931;
unsigned long long int var_19 = 14410159853484463003ULL;
long long int arr_0 [10] ;
unsigned short arr_2 [10] ;
short arr_4 [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -3520190034645174720LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)62387;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-1626;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6588144621250544036ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
