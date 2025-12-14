#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 12920346462123448925ULL;
unsigned char var_3 = (unsigned char)155;
unsigned int var_7 = 3967523453U;
signed char var_9 = (signed char)35;
unsigned long long int var_13 = 15470613012218666420ULL;
unsigned short var_14 = (unsigned short)42095;
unsigned int var_15 = 1571159047U;
int zero = 0;
long long int var_17 = 9200032011782887908LL;
int var_18 = -839965788;
_Bool var_19 = (_Bool)0;
short var_20 = (short)14781;
unsigned short arr_1 [18] ;
signed char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)4999;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
