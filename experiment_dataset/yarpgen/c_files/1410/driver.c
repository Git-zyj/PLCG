#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10120457838111196467ULL;
signed char var_2 = (signed char)78;
unsigned long long int var_3 = 13341231226385331293ULL;
unsigned long long int var_6 = 869289287100928632ULL;
long long int var_8 = 7186983732474329428LL;
long long int var_12 = 6862179138333430824LL;
long long int var_13 = 7720888817612304766LL;
short var_14 = (short)25947;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7193306840589644363LL;
int zero = 0;
unsigned long long int var_19 = 18405904031161046072ULL;
unsigned int var_20 = 1810345621U;
signed char var_21 = (signed char)36;
unsigned int var_22 = 3983091976U;
long long int var_23 = -4434283498023394035LL;
unsigned short arr_2 [16] ;
unsigned int arr_3 [16] ;
unsigned long long int arr_4 [16] ;
long long int arr_6 [18] ;
long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)39319;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1380977853U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1668094853469960369ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -1662803502662764024LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 8144399453179952402LL : -6188795701572050994LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
