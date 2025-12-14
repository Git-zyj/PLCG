#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6990734668635216513ULL;
unsigned long long int var_1 = 7143145258551758526ULL;
int var_2 = 867333739;
short var_3 = (short)1318;
long long int var_5 = 8238707732218700148LL;
long long int var_6 = 1193845723523392737LL;
unsigned int var_9 = 332288193U;
short var_12 = (short)-25022;
int zero = 0;
short var_13 = (short)-9404;
int var_14 = -1671388671;
unsigned int var_15 = 1381272795U;
signed char var_16 = (signed char)-42;
short var_17 = (short)1613;
_Bool var_18 = (_Bool)1;
_Bool arr_0 [17] ;
unsigned char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)70;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
