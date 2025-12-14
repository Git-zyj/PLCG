#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20729;
unsigned short var_6 = (unsigned short)9172;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 3600171140378627395ULL;
unsigned long long int var_15 = 13150331948074234879ULL;
unsigned short var_16 = (unsigned short)59306;
unsigned int var_17 = 3944173107U;
unsigned int var_18 = 2182717557U;
short var_19 = (short)26259;
long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -594881414933854571LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
