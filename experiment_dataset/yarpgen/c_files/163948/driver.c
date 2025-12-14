#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 12232104251521359404ULL;
unsigned char var_15 = (unsigned char)140;
unsigned long long int var_17 = 11369492105264561808ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)89;
unsigned short var_20 = (unsigned short)52702;
int var_21 = 1595020972;
unsigned short var_22 = (unsigned short)56910;
_Bool var_23 = (_Bool)0;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)5;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
