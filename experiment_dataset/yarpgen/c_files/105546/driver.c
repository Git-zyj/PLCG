#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)5069;
long long int var_16 = -8117743362187392307LL;
int zero = 0;
unsigned char var_18 = (unsigned char)231;
unsigned char var_19 = (unsigned char)187;
int var_20 = 297654329;
unsigned long long int var_21 = 14166628349922875963ULL;
unsigned short var_22 = (unsigned short)35148;
unsigned int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2785419935U;
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
