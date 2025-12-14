#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
long long int var_5 = -3369105251714335890LL;
int var_6 = -1677354479;
signed char var_8 = (signed char)-98;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 840588628U;
int var_18 = 1896600636;
unsigned long long int var_19 = 6625562819513994063ULL;
int var_20 = -316839688;
signed char var_21 = (signed char)83;
signed char arr_2 [14] ;
signed char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-74;
}

void checksum() {
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
