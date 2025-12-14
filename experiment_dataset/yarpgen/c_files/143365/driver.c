#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6036963454893104264LL;
int var_2 = 2145897612;
unsigned short var_7 = (unsigned short)11724;
int var_9 = 829643918;
short var_13 = (short)30110;
int zero = 0;
unsigned long long int var_20 = 6476905243811933586ULL;
signed char var_21 = (signed char)-12;
long long int var_22 = 3073369130290982303LL;
unsigned long long int var_23 = 1145771196802857104ULL;
signed char var_24 = (signed char)24;
long long int var_25 = 1079564048153616516LL;
_Bool var_26 = (_Bool)0;
_Bool arr_0 [19] ;
long long int arr_4 [11] ;
unsigned long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -2872577794890298466LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2563987381563219007ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
