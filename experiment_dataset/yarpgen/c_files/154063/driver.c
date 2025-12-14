#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 904914051222296371LL;
long long int var_3 = 1656816184530970888LL;
short var_6 = (short)16259;
long long int var_8 = 1955931630394907865LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4334177214023080794LL;
long long int var_12 = 5142008946474930912LL;
long long int var_13 = -125144980758304651LL;
int zero = 0;
long long int var_14 = -456867115688622287LL;
long long int var_15 = -1787992681223136478LL;
long long int var_16 = -4006283002118143987LL;
long long int var_17 = 4649436447469814077LL;
long long int arr_1 [12] ;
long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -5585899598693463571LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 6665038899120682078LL : 8651340430777512496LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
