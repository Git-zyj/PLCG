#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2836987748504561793LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 1401479377218103745LL;
unsigned int var_4 = 1037277221U;
long long int var_11 = -881404856453198555LL;
short var_13 = (short)2111;
int zero = 0;
long long int var_17 = 3824762784989466313LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)17949;
unsigned long long int var_20 = 4666658445824578814ULL;
long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2103415275029063781LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
