#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21386;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_6 = 741004004;
int var_7 = 119815072;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-9;
int var_13 = -1960593611;
unsigned short var_14 = (unsigned short)55838;
int zero = 0;
long long int var_17 = 958475914922133706LL;
int var_18 = -1163539733;
short var_19 = (short)-16023;
unsigned short var_20 = (unsigned short)55042;
long long int var_21 = 847801478399690028LL;
signed char var_22 = (signed char)-121;
short var_23 = (short)-24193;
unsigned short var_24 = (unsigned short)42966;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)52617;
long long int var_28 = 4609834015140607563LL;
unsigned short var_29 = (unsigned short)36273;
unsigned long long int var_30 = 5119785874490671338ULL;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)48345;
unsigned long long int arr_0 [24] ;
_Bool arr_9 [24] ;
int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 15049211494750424607ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 603704272;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
