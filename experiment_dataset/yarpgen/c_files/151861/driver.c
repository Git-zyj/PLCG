#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned int var_2 = 898732184U;
unsigned int var_4 = 1849622752U;
unsigned short var_7 = (unsigned short)7099;
unsigned int var_13 = 1098025012U;
unsigned char var_14 = (unsigned char)120;
unsigned long long int var_15 = 14740427265983544433ULL;
signed char var_16 = (signed char)86;
short var_19 = (short)10396;
int zero = 0;
unsigned int var_20 = 3665864918U;
unsigned long long int var_21 = 1126116148288981220ULL;
int var_22 = -1161338928;
void init() {
}

void checksum() {
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
