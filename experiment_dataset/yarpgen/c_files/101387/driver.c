#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned int var_3 = 1356086129U;
unsigned long long int var_6 = 11639869484321761902ULL;
short var_12 = (short)8696;
int var_15 = -1270536818;
unsigned char var_17 = (unsigned char)162;
int zero = 0;
int var_18 = -1062502971;
short var_19 = (short)8497;
void init() {
}

void checksum() {
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
