#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
int var_2 = -1844099176;
long long int var_3 = 3989408357090355852LL;
int var_5 = 539276702;
unsigned int var_6 = 3846313669U;
unsigned char var_8 = (unsigned char)182;
int var_13 = 2004466448;
short var_14 = (short)-23308;
unsigned char var_17 = (unsigned char)168;
int zero = 0;
short var_19 = (short)-31010;
unsigned int var_20 = 2649887298U;
_Bool var_21 = (_Bool)0;
int var_22 = -926689651;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
