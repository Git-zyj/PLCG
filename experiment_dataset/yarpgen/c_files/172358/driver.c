#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)3;
unsigned int var_8 = 2370967419U;
signed char var_11 = (signed char)-31;
int var_12 = -98912628;
signed char var_13 = (signed char)92;
int zero = 0;
signed char var_14 = (signed char)-54;
unsigned long long int var_15 = 2885202463040655942ULL;
short var_16 = (short)-3347;
long long int var_17 = -2608241478898765873LL;
unsigned short var_18 = (unsigned short)47634;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
