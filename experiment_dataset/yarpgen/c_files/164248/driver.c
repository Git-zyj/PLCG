#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
unsigned short var_5 = (unsigned short)38008;
long long int var_13 = -3682816406518135074LL;
long long int var_15 = 2682495668990281437LL;
signed char var_16 = (signed char)-54;
int zero = 0;
signed char var_17 = (signed char)122;
unsigned int var_18 = 2470134048U;
unsigned short var_19 = (unsigned short)17416;
signed char var_20 = (signed char)-14;
short var_21 = (short)544;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
