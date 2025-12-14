#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -276328791564742940LL;
unsigned long long int var_4 = 10595330235106461510ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = 2701505489587193970LL;
unsigned long long int var_9 = 15520958213392101619ULL;
unsigned int var_12 = 3848211058U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2187237197U;
long long int var_17 = -5146825824051309356LL;
int zero = 0;
unsigned long long int var_18 = 3484215985660638041ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2537635957U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1986852111;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
