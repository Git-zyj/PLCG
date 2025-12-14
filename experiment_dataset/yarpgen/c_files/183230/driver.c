#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned short var_5 = (unsigned short)44834;
short var_11 = (short)29371;
signed char var_12 = (signed char)-118;
unsigned char var_13 = (unsigned char)160;
int zero = 0;
unsigned int var_15 = 969978128U;
signed char var_16 = (signed char)-2;
short var_17 = (short)23902;
long long int var_18 = -7873439861248823987LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
