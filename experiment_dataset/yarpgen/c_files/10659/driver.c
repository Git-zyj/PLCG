#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2400;
unsigned long long int var_8 = 15992913376827979843ULL;
long long int var_9 = 8519898280885355890LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-17020;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)25317;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
