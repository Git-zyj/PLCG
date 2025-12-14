#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3421094914804628408LL;
_Bool var_7 = (_Bool)0;
short var_13 = (short)-28332;
signed char var_17 = (signed char)125;
int zero = 0;
unsigned char var_18 = (unsigned char)178;
unsigned char var_19 = (unsigned char)6;
void init() {
}

void checksum() {
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
