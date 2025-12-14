#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7278556178390966608LL;
unsigned long long int var_5 = 12242407897676753457ULL;
long long int var_7 = -3714576003341381892LL;
long long int var_14 = -5047660596290286950LL;
signed char var_18 = (signed char)-111;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2842813153771338874ULL;
short var_22 = (short)28320;
unsigned long long int var_23 = 16021917091622144968ULL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
unsigned short arr_1 [14] ;
int arr_3 [14] [14] [14] ;
int arr_5 [14] [14] [14] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)34968;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1984612735;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 200557171;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -1929850304395226392LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
