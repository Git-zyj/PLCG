#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58410;
short var_4 = (short)-15294;
short var_5 = (short)-257;
short var_8 = (short)-23275;
long long int var_10 = 6726244842137357582LL;
short var_14 = (short)8335;
int var_15 = -2106276406;
signed char var_16 = (signed char)-118;
signed char var_18 = (signed char)-6;
int zero = 0;
short var_19 = (short)-5919;
short var_20 = (short)5747;
unsigned long long int var_21 = 927916205135492811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
