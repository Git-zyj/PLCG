#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15993;
unsigned long long int var_4 = 12689660746185171620ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_14 = (unsigned short)21241;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8743217947152905837LL;
unsigned short var_17 = (unsigned short)39374;
unsigned short var_18 = (unsigned short)40812;
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
