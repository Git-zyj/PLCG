#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17230211369288893066ULL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-31525;
unsigned short var_13 = (unsigned short)6807;
int zero = 0;
unsigned short var_14 = (unsigned short)14902;
int var_15 = -447326296;
unsigned int var_16 = 2611097230U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
