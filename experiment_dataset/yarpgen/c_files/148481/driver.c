#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1853093022994500382LL;
short var_3 = (short)-23131;
long long int var_4 = 4718695707537935555LL;
long long int var_5 = -7713883381791762719LL;
long long int var_14 = -5148670759743333027LL;
long long int var_16 = 5580100708062424921LL;
long long int var_18 = -6677687047266109766LL;
int zero = 0;
short var_19 = (short)-3958;
long long int var_20 = 9048565575400317731LL;
short var_21 = (short)-29423;
long long int var_22 = 6882952157921556602LL;
short arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-19916;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
