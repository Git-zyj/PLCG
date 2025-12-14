#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28397;
int var_4 = -1489476082;
int var_8 = -1436320915;
_Bool var_10 = (_Bool)1;
long long int var_12 = -1440511564338763335LL;
unsigned int var_13 = 3500714713U;
long long int var_15 = -2240479918625272553LL;
int zero = 0;
unsigned int var_16 = 1363727383U;
int var_17 = 901070518;
int var_18 = -255309457;
unsigned long long int var_19 = 5823820067100438298ULL;
long long int var_20 = 7340468617662349480LL;
unsigned int var_21 = 1311132109U;
int arr_1 [24] [24] ;
short arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2039951929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)18051;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
