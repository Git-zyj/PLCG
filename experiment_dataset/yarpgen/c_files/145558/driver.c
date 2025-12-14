#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 93235320507025694LL;
long long int var_15 = 2277561645922737011LL;
int zero = 0;
long long int var_17 = -5968353876486488681LL;
long long int var_18 = 5878594673143592293LL;
long long int var_19 = -7466361968474679520LL;
long long int var_20 = -5296117889365508075LL;
long long int var_21 = -1857697149111495553LL;
long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -5375145318668876271LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7314562577258404191LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 7287153319319599794LL;
}

void checksum() {
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
