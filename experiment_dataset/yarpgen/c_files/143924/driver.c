#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned long long int var_1 = 15128514132448158052ULL;
signed char var_2 = (signed char)63;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)96;
unsigned char var_6 = (unsigned char)37;
signed char var_9 = (signed char)-35;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-88;
unsigned short var_12 = (unsigned short)26090;
short var_13 = (short)-26820;
int var_14 = 1438316135;
unsigned long long int var_15 = 8103921882706939511ULL;
short var_16 = (short)-5077;
signed char var_17 = (signed char)116;
_Bool arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
