#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9197791064233458235LL;
unsigned long long int var_1 = 3042267403351751317ULL;
unsigned char var_4 = (unsigned char)114;
unsigned int var_7 = 2276731590U;
signed char var_8 = (signed char)-36;
unsigned char var_9 = (unsigned char)209;
int zero = 0;
short var_10 = (short)-8227;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)34;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
