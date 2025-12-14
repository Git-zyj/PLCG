#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60711;
long long int var_3 = 5338213293304225624LL;
unsigned int var_4 = 3904076039U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12204688848896919310ULL;
signed char var_8 = (signed char)-75;
short var_9 = (short)14471;
int zero = 0;
long long int var_10 = -1356274272598440371LL;
unsigned long long int var_11 = 13796179638363105363ULL;
long long int var_12 = 8707631849874426119LL;
unsigned short var_13 = (unsigned short)47439;
unsigned int var_14 = 355636311U;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)57;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
