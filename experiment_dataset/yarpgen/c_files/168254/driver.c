#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30626;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3290437586U;
unsigned long long int var_5 = 4867589929965691712ULL;
unsigned long long int var_14 = 7552101337322240846ULL;
int zero = 0;
unsigned long long int var_18 = 17179654762096629533ULL;
signed char var_19 = (signed char)-106;
unsigned long long int var_20 = 5029239766318598209ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)16294;
unsigned int arr_2 [21] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2308311931U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)15758;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
