#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-34;
unsigned int var_4 = 3000313261U;
unsigned char var_6 = (unsigned char)0;
signed char var_7 = (signed char)-65;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)105;
short var_11 = (short)-1924;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
long long int var_20 = -1867190349716441612LL;
long long int var_21 = -1141593936475520545LL;
unsigned short var_22 = (unsigned short)6711;
unsigned short var_23 = (unsigned short)54447;
unsigned int var_24 = 3603548047U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
