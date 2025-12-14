#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5221;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)23;
unsigned short var_13 = (unsigned short)16088;
long long int var_15 = -7789105283623380382LL;
int zero = 0;
short var_16 = (short)-31970;
short var_17 = (short)-8781;
unsigned long long int var_18 = 4232873609313885244ULL;
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
