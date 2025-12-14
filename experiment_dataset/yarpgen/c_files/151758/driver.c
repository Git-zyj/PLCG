#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3775694176U;
unsigned short var_3 = (unsigned short)4966;
unsigned long long int var_4 = 11221847289069186848ULL;
unsigned short var_9 = (unsigned short)3012;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)25079;
int var_12 = 1210529963;
int zero = 0;
short var_13 = (short)16643;
signed char var_14 = (signed char)56;
unsigned short var_15 = (unsigned short)53721;
unsigned short var_16 = (unsigned short)33598;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
