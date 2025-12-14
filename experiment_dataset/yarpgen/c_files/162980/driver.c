#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18411059247516554617ULL;
unsigned long long int var_2 = 17211353441876131688ULL;
unsigned int var_5 = 1446856126U;
signed char var_7 = (signed char)79;
short var_8 = (short)4956;
unsigned long long int var_10 = 6308136771410514053ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)22;
unsigned char var_12 = (unsigned char)19;
unsigned short var_13 = (unsigned short)63531;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)60363;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
