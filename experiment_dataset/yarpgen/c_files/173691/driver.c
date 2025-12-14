#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_6 = 8704337795327810740LL;
unsigned int var_7 = 771433319U;
short var_9 = (short)25760;
int zero = 0;
short var_13 = (short)27891;
long long int var_14 = -123602710084549521LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
