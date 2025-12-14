#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1287850167;
int var_3 = 1781443679;
unsigned short var_7 = (unsigned short)55752;
unsigned short var_10 = (unsigned short)59704;
int var_11 = -1011550737;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -199803682;
unsigned long long int var_15 = 17506916074327100091ULL;
long long int var_16 = -6132247369218001314LL;
int var_17 = 1887594708;
_Bool arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3741395389116877588ULL : 8399241477896239097ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1633808752 : 1626759293;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
