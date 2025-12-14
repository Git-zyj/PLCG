#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3607386980975007113LL;
short var_4 = (short)-18351;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1883171610932633410LL;
long long int var_7 = 3475802549069657755LL;
int var_8 = -1693638861;
int var_9 = -1026428005;
unsigned long long int var_13 = 4992031231126740660ULL;
long long int var_14 = -2563336943719708982LL;
int var_15 = -645725753;
int var_19 = 791816463;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 5861141702999667504ULL;
unsigned short var_22 = (unsigned short)48836;
unsigned long long int arr_0 [24] ;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3342801288925960970ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)56447;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
