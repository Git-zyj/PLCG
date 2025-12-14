#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22251;
int var_7 = 1402485646;
unsigned long long int var_12 = 6400231164023147097ULL;
unsigned char var_15 = (unsigned char)83;
int zero = 0;
long long int var_17 = 8739223381377601822LL;
unsigned char var_18 = (unsigned char)68;
int var_19 = -89745062;
short var_20 = (short)-5126;
_Bool var_21 = (_Bool)1;
long long int var_22 = 2492618310586732978LL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3248780745U;
long long int arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = -1779177588211507720LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
