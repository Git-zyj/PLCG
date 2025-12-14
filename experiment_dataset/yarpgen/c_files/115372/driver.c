#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
signed char var_4 = (signed char)-72;
unsigned short var_7 = (unsigned short)1695;
unsigned long long int var_12 = 3138122855210409689ULL;
int zero = 0;
short var_16 = (short)-30047;
unsigned char var_17 = (unsigned char)159;
_Bool var_18 = (_Bool)1;
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
