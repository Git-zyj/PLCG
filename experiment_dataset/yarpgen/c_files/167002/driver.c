#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 689684698U;
unsigned long long int var_2 = 11831052620933784430ULL;
unsigned long long int var_3 = 4029980203969612925ULL;
int var_5 = 332746868;
unsigned long long int var_7 = 6506139981789042142ULL;
signed char var_8 = (signed char)25;
unsigned int var_9 = 55366430U;
int zero = 0;
unsigned int var_10 = 766280742U;
short var_11 = (short)-26531;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
