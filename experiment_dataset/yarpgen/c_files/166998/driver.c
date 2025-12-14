#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned char var_1 = (unsigned char)105;
signed char var_2 = (signed char)48;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 13633049363351388754ULL;
signed char var_11 = (signed char)-26;
short var_13 = (short)17110;
short var_14 = (short)-758;
signed char var_15 = (signed char)44;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -248556060;
signed char var_21 = (signed char)-110;
unsigned char var_22 = (unsigned char)8;
unsigned int var_23 = 3721069492U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
