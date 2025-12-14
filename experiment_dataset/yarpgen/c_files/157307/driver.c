#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)15470;
long long int var_6 = -4560318758959673222LL;
short var_12 = (short)45;
int zero = 0;
unsigned short var_17 = (unsigned short)28526;
long long int var_18 = 5116552102053252607LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8250602144130837216LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
