#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
long long int var_1 = -7173820297878830905LL;
long long int var_3 = -5671388202357876216LL;
long long int var_5 = 7844197936188974627LL;
long long int var_7 = 5765557846280299387LL;
unsigned long long int var_8 = 14695235211291976482ULL;
int var_9 = 1176741933;
int var_13 = -1393410342;
int var_14 = -969748997;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 3052400350303084568LL;
long long int var_20 = 6973652740451303063LL;
unsigned short var_21 = (unsigned short)17082;
signed char var_22 = (signed char)48;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 2674393668U;
long long int var_25 = 661037464525487952LL;
unsigned long long int var_26 = 2824945029845876168ULL;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)5969;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
