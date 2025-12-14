#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-3;
signed char var_13 = (signed char)14;
short var_15 = (short)1712;
short var_16 = (short)-14135;
int zero = 0;
unsigned int var_17 = 3642937535U;
unsigned short var_18 = (unsigned short)49867;
unsigned char var_19 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
