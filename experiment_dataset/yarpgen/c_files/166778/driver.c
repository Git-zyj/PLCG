#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 21917432;
int zero = 0;
short var_13 = (short)27825;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8824993550037985388LL;
short var_16 = (short)5198;
short var_17 = (short)-31853;
long long int var_18 = -773971818217640990LL;
unsigned char var_19 = (unsigned char)80;
short var_20 = (short)2047;
unsigned long long int var_21 = 12864631251910553806ULL;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 816752413513134918LL : -1445010877028623179LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
