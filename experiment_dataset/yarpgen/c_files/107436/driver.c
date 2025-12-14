#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 456121667U;
unsigned char var_1 = (unsigned char)152;
int var_3 = 202421675;
unsigned char var_5 = (unsigned char)248;
signed char var_7 = (signed char)-85;
int var_9 = 1047907048;
unsigned long long int var_10 = 15978448138203706563ULL;
signed char var_11 = (signed char)-53;
int zero = 0;
unsigned int var_12 = 1559044476U;
long long int var_13 = -8832733427903403834LL;
int var_14 = 242718680;
signed char var_15 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
