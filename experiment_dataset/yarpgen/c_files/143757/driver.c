#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1632042498448724776LL;
unsigned short var_3 = (unsigned short)35074;
int var_9 = -1685086262;
signed char var_10 = (signed char)9;
_Bool var_14 = (_Bool)0;
long long int var_15 = 2423109627336655137LL;
int zero = 0;
signed char var_20 = (signed char)-101;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3559920465784529203LL;
short var_23 = (short)6707;
signed char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)125;
}

void checksum() {
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
