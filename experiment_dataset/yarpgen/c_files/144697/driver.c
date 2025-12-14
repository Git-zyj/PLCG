#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)17489;
unsigned short var_6 = (unsigned short)38550;
unsigned int var_8 = 3249100209U;
signed char var_12 = (signed char)125;
short var_13 = (short)-27906;
int zero = 0;
unsigned int var_15 = 1611718455U;
signed char var_16 = (signed char)102;
unsigned long long int var_17 = 6460812638052776815ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-2895;
void init() {
}

void checksum() {
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
