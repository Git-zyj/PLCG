#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6629883888385715893LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 13490306317765360390ULL;
unsigned short var_10 = (unsigned short)40899;
long long int var_17 = 8802413364991346336LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 95436115;
signed char var_21 = (signed char)0;
unsigned short var_22 = (unsigned short)23992;
signed char var_23 = (signed char)28;
unsigned long long int var_24 = 12892726188645739078ULL;
long long int var_25 = 4764283514073058875LL;
unsigned long long int var_26 = 11015278722624731308ULL;
unsigned long long int var_27 = 14690197334458506443ULL;
unsigned long long int arr_1 [25] ;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 17571796248251637802ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
