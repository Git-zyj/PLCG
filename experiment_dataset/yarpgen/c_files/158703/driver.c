#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4368259588821134727LL;
short var_6 = (short)-3999;
long long int var_9 = 4538654475729014021LL;
long long int var_14 = 4054622288429442669LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3929724897U;
int zero = 0;
long long int var_20 = -235057544992167982LL;
unsigned short var_21 = (unsigned short)44127;
long long int var_22 = -7084786075575200120LL;
int var_23 = 1668826620;
_Bool var_24 = (_Bool)0;
long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3101695175471227294LL;
}

void checksum() {
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
