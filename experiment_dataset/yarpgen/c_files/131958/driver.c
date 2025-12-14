#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 639312173481839606ULL;
signed char var_4 = (signed char)-24;
int var_5 = -1829311971;
long long int var_6 = 1459494983187542071LL;
int var_13 = 2054167386;
int zero = 0;
signed char var_15 = (signed char)84;
_Bool var_16 = (_Bool)0;
unsigned long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 8778002328471717167ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
