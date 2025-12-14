#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4162065028U;
unsigned long long int var_3 = 17468733878688317378ULL;
unsigned char var_5 = (unsigned char)224;
signed char var_8 = (signed char)3;
unsigned char var_9 = (unsigned char)201;
unsigned long long int var_11 = 10959975122505295597ULL;
short var_12 = (short)17619;
int zero = 0;
signed char var_15 = (signed char)-117;
long long int var_16 = 5011372500303295540LL;
long long int var_17 = -4119643906299721294LL;
int var_18 = 1758314354;
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
