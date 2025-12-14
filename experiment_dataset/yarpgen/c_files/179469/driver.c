#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30248;
unsigned char var_1 = (unsigned char)89;
unsigned int var_2 = 1312599987U;
unsigned char var_3 = (unsigned char)74;
int var_4 = -920044878;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)68;
signed char var_10 = (signed char)22;
int zero = 0;
unsigned int var_11 = 3406952868U;
short var_12 = (short)-1444;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
