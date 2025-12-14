#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5082417711871109302ULL;
unsigned long long int var_6 = 15054793326471589517ULL;
unsigned short var_8 = (unsigned short)3475;
long long int var_9 = 778380486121374582LL;
long long int var_11 = -4500058435511216783LL;
unsigned long long int var_13 = 18225522112104581158ULL;
unsigned int var_17 = 3638874436U;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)107;
signed char var_21 = (signed char)65;
unsigned long long int var_22 = 18038072490857901699ULL;
signed char var_23 = (signed char)118;
signed char var_24 = (signed char)-1;
signed char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)17;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
