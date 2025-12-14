#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2678924066U;
unsigned int var_2 = 717456661U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)63;
unsigned int var_7 = 2892761427U;
unsigned short var_8 = (unsigned short)51275;
int zero = 0;
short var_11 = (short)-28518;
short var_12 = (short)-26059;
signed char var_13 = (signed char)-7;
unsigned short var_14 = (unsigned short)41218;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
