#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1326866242;
unsigned short var_4 = (unsigned short)26627;
unsigned int var_7 = 2626005623U;
unsigned short var_9 = (unsigned short)12512;
signed char var_13 = (signed char)21;
int zero = 0;
short var_15 = (short)1436;
unsigned short var_16 = (unsigned short)15981;
unsigned int var_17 = 3023387723U;
signed char var_18 = (signed char)-49;
short var_19 = (short)-6460;
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
