#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)14653;
long long int var_14 = -3544898962853896902LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 13225327148111098565ULL;
unsigned char var_21 = (unsigned char)40;
unsigned int var_22 = 1605181729U;
unsigned short var_23 = (unsigned short)50080;
unsigned long long int var_24 = 16623859120045765276ULL;
int var_25 = -385930452;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)31501;
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
