#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1659868333903160424LL;
unsigned short var_3 = (unsigned short)5609;
_Bool var_5 = (_Bool)1;
short var_7 = (short)3942;
short var_9 = (short)26882;
unsigned short var_13 = (unsigned short)60617;
unsigned int var_14 = 4286000105U;
int zero = 0;
long long int var_19 = 4383448626379089101LL;
short var_20 = (short)-14685;
unsigned char var_21 = (unsigned char)226;
unsigned long long int var_22 = 499095716931963361ULL;
unsigned int var_23 = 483524161U;
short var_24 = (short)29951;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
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
