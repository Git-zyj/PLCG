#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)868;
long long int var_2 = -1899221792343416711LL;
long long int var_3 = 7084157507664631367LL;
unsigned int var_4 = 3726901425U;
unsigned long long int var_5 = 4824855661067528092ULL;
long long int var_6 = 5956681440419100963LL;
unsigned int var_11 = 190727267U;
int zero = 0;
unsigned char var_12 = (unsigned char)125;
short var_13 = (short)30482;
short var_14 = (short)22231;
long long int var_15 = -8175632495732624897LL;
short var_16 = (short)-16561;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
