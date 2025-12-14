#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17785;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 6236482430023006572ULL;
short var_9 = (short)21528;
long long int var_12 = -3888899196312042980LL;
unsigned long long int var_15 = 1713264930563911451ULL;
unsigned int var_17 = 3864677273U;
int zero = 0;
short var_18 = (short)10988;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
int var_21 = 763819100;
unsigned long long int var_22 = 13239002645388505371ULL;
unsigned long long int var_23 = 12265256811223666384ULL;
_Bool arr_0 [12] ;
signed char arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)30;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8748959243709521300LL : 3090364539252288475LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
