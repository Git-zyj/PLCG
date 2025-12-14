#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3109275314U;
_Bool var_6 = (_Bool)1;
long long int var_10 = 4690701231788856444LL;
unsigned char var_11 = (unsigned char)91;
signed char var_12 = (signed char)-95;
long long int var_13 = 8280076739411405566LL;
long long int var_14 = 5032433616982203489LL;
signed char var_15 = (signed char)-57;
int zero = 0;
unsigned char var_17 = (unsigned char)34;
short var_18 = (short)-25103;
unsigned short var_19 = (unsigned short)39884;
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
