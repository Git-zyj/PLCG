#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1549400494;
_Bool var_3 = (_Bool)0;
long long int var_5 = 5564605583996028337LL;
short var_8 = (short)-18455;
int zero = 0;
unsigned int var_10 = 748255503U;
short var_11 = (short)25799;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
