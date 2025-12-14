#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned long long int var_2 = 2520456527755956811ULL;
short var_3 = (short)-18690;
short var_8 = (short)30427;
short var_9 = (short)26084;
unsigned short var_12 = (unsigned short)42202;
unsigned char var_13 = (unsigned char)125;
signed char var_16 = (signed char)-13;
int zero = 0;
int var_17 = -2101701309;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
