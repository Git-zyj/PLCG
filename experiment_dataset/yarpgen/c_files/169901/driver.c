#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)60534;
unsigned char var_6 = (unsigned char)225;
int var_9 = 1052600703;
unsigned long long int var_10 = 7622626334053801815ULL;
short var_11 = (short)29281;
unsigned int var_12 = 1218306969U;
unsigned int var_13 = 1115387376U;
unsigned long long int var_14 = 2750863411217668902ULL;
int var_16 = -1310302441;
unsigned short var_18 = (unsigned short)48060;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)149;
unsigned long long int var_22 = 17649711933516269242ULL;
short var_23 = (short)21960;
void init() {
}

void checksum() {
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
