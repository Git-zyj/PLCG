#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1683790876U;
long long int var_2 = -8271170731619177291LL;
long long int var_3 = 2774160919340224015LL;
unsigned long long int var_5 = 3606873696230529187ULL;
unsigned int var_7 = 208051586U;
int var_9 = -1529908759;
short var_11 = (short)-16332;
unsigned int var_12 = 1101345258U;
unsigned short var_13 = (unsigned short)27559;
int var_15 = -2120963817;
int zero = 0;
int var_17 = 1488402505;
signed char var_18 = (signed char)102;
long long int var_19 = -8819806948798719208LL;
signed char var_20 = (signed char)-35;
unsigned int var_21 = 2151981256U;
unsigned long long int var_22 = 11570898482955637977ULL;
signed char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-58;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
