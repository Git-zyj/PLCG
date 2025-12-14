#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned char var_1 = (unsigned char)46;
unsigned long long int var_3 = 6430960778330665794ULL;
unsigned char var_4 = (unsigned char)148;
unsigned char var_6 = (unsigned char)88;
unsigned char var_7 = (unsigned char)207;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4280974814060350588ULL;
int zero = 0;
unsigned long long int var_12 = 17741857020165334530ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)58;
unsigned char var_15 = (unsigned char)66;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)195;
unsigned long long int var_19 = 17866919579642398249ULL;
unsigned long long int var_20 = 744524502968429503ULL;
long long int arr_2 [18] ;
_Bool arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 882474594780724702LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
