#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 39644014U;
long long int var_2 = -4629228540617977116LL;
signed char var_3 = (signed char)113;
unsigned short var_4 = (unsigned short)39717;
long long int var_8 = -427801160712028363LL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)114;
unsigned long long int var_14 = 12994199358467226884ULL;
int var_15 = -1630318047;
int zero = 0;
signed char var_16 = (signed char)-34;
long long int var_17 = -3554406106356622680LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3226907457929955675LL;
long long int var_20 = 1526318685933659260LL;
short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)15483 : (short)-25024;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
