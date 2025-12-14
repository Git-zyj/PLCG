#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 884525671;
int var_4 = -1075506809;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_14 = 9887334428591048088ULL;
long long int var_17 = -8506680945415705151LL;
int zero = 0;
short var_18 = (short)-19146;
signed char var_19 = (signed char)-79;
short var_20 = (short)-28803;
unsigned long long int var_21 = 8901992567354360769ULL;
void init() {
}

void checksum() {
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
