#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13517;
int var_7 = -1650911189;
signed char var_10 = (signed char)-93;
short var_13 = (short)7903;
signed char var_14 = (signed char)-110;
int zero = 0;
short var_16 = (short)-15686;
short var_17 = (short)24002;
unsigned short var_18 = (unsigned short)26375;
unsigned int var_19 = 3282893217U;
void init() {
}

void checksum() {
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
