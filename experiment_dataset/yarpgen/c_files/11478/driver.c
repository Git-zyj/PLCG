#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -415562388;
signed char var_1 = (signed char)17;
unsigned long long int var_2 = 8817613301570180791ULL;
unsigned long long int var_3 = 3037510811339267094ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6708954336480014726LL;
int var_12 = 1408888053;
int zero = 0;
int var_14 = -1886083574;
int var_15 = 1409005572;
int var_16 = -1301865444;
unsigned char var_17 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
