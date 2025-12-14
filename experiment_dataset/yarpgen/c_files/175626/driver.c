#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
signed char var_2 = (signed char)123;
signed char var_3 = (signed char)108;
signed char var_5 = (signed char)102;
unsigned char var_7 = (unsigned char)22;
unsigned char var_8 = (unsigned char)20;
int var_11 = 1355923453;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 10999744981599155150ULL;
unsigned char var_17 = (unsigned char)188;
short var_18 = (short)147;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
