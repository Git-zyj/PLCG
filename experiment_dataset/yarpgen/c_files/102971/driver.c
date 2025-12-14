#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 8984346168874776675ULL;
unsigned char var_4 = (unsigned char)108;
unsigned short var_5 = (unsigned short)47150;
int var_6 = -245120554;
int zero = 0;
unsigned int var_14 = 1356418240U;
long long int var_15 = -2229767981924469154LL;
unsigned long long int var_16 = 4849337334189290624ULL;
int var_17 = -583411412;
signed char var_18 = (signed char)125;
signed char var_19 = (signed char)-90;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2013174935U;
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
