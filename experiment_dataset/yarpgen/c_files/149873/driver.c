#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15006;
_Bool var_5 = (_Bool)0;
long long int var_14 = 7466588626409964312LL;
short var_16 = (short)-728;
int zero = 0;
unsigned short var_20 = (unsigned short)21727;
signed char var_21 = (signed char)-110;
signed char var_22 = (signed char)35;
signed char var_23 = (signed char)125;
unsigned short var_24 = (unsigned short)24076;
long long int var_25 = 5662348271490202497LL;
short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)14587;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
