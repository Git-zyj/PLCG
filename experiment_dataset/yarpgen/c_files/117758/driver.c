#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3980165748U;
int var_1 = 1606188064;
signed char var_3 = (signed char)-29;
unsigned int var_4 = 595290275U;
int var_5 = -1560174780;
unsigned int var_8 = 2188992526U;
int zero = 0;
signed char var_16 = (signed char)31;
long long int var_17 = 7640801433183500723LL;
short var_18 = (short)4864;
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
