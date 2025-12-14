#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-115;
long long int var_13 = -2689005462142667218LL;
unsigned long long int var_15 = 11235790400530539080ULL;
int zero = 0;
int var_18 = -1772636756;
long long int var_19 = 108070331061173631LL;
signed char var_20 = (signed char)22;
unsigned short var_21 = (unsigned short)51964;
unsigned char arr_1 [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -7126700428013883115LL;
}

void checksum() {
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
