#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
unsigned char var_6 = (unsigned char)174;
unsigned short var_8 = (unsigned short)56004;
short var_9 = (short)-22005;
int zero = 0;
unsigned long long int var_15 = 16939594101108245042ULL;
unsigned int var_16 = 1373818677U;
_Bool var_17 = (_Bool)0;
int var_18 = 1400399119;
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
