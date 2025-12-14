#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)41;
unsigned int var_3 = 584357257U;
short var_4 = (short)-13048;
short var_6 = (short)-10183;
unsigned long long int var_8 = 12775084074648014489ULL;
short var_11 = (short)-12675;
int zero = 0;
unsigned short var_12 = (unsigned short)46885;
unsigned char var_13 = (unsigned char)179;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)39;
short var_16 = (short)-13569;
long long int var_17 = 747308576711825578LL;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)13502;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
