#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4524252157596731281LL;
long long int var_1 = 6177098883469834214LL;
unsigned int var_4 = 477167809U;
unsigned char var_6 = (unsigned char)170;
unsigned char var_7 = (unsigned char)94;
short var_8 = (short)-1879;
int zero = 0;
unsigned int var_11 = 978697012U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)47;
short var_14 = (short)-10767;
short var_15 = (short)17161;
long long int arr_0 [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -7863877263058162706LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)43744;
}

void checksum() {
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
