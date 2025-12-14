#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1668806449;
long long int var_3 = -8879303833401265752LL;
signed char var_4 = (signed char)-108;
short var_6 = (short)-1353;
short var_7 = (short)18383;
unsigned int var_11 = 1092356221U;
signed char var_12 = (signed char)82;
short var_16 = (short)-19928;
int zero = 0;
unsigned short var_17 = (unsigned short)981;
signed char var_18 = (signed char)118;
void init() {
}

void checksum() {
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
