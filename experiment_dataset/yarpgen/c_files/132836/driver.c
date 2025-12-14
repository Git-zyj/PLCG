#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3414179584539852092LL;
unsigned char var_10 = (unsigned char)43;
unsigned long long int var_12 = 4937928715708622602ULL;
unsigned char var_13 = (unsigned char)75;
int zero = 0;
unsigned long long int var_15 = 17622667613724719023ULL;
signed char var_16 = (signed char)101;
unsigned short var_17 = (unsigned short)22079;
unsigned char var_18 = (unsigned char)38;
long long int var_19 = 2564897266261309894LL;
short var_20 = (short)21893;
_Bool var_21 = (_Bool)0;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1657758188536670749LL : 5062757838974765944LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
