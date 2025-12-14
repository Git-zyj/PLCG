#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2827;
unsigned char var_3 = (unsigned char)3;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)22;
long long int var_11 = -3123498990761079650LL;
int zero = 0;
unsigned long long int var_16 = 9403375746674488893ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)31;
unsigned int var_19 = 2539742680U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
