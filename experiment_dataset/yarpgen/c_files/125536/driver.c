#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5298141412013104255LL;
long long int var_3 = 6513070266718001956LL;
_Bool var_4 = (_Bool)1;
int var_5 = 760561224;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4738315060215362717ULL;
_Bool var_11 = (_Bool)1;
short var_13 = (short)19546;
int zero = 0;
unsigned long long int var_14 = 6355136984239253683ULL;
unsigned int var_15 = 2877222957U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15085156315560140389ULL;
long long int var_18 = -3876687961455933998LL;
_Bool arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
