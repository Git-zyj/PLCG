#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6950709918377275860ULL;
unsigned short var_4 = (unsigned short)64952;
short var_5 = (short)31747;
unsigned long long int var_6 = 18324051275685871211ULL;
unsigned long long int var_7 = 2945825648472124180ULL;
unsigned char var_8 = (unsigned char)201;
unsigned int var_9 = 3598137786U;
int zero = 0;
unsigned char var_10 = (unsigned char)112;
short var_11 = (short)1604;
long long int var_12 = 7276533277788345157LL;
int var_13 = 766285830;
int var_14 = -1787838071;
unsigned int var_15 = 1567980729U;
unsigned short arr_0 [15] ;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)63356;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)100;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
