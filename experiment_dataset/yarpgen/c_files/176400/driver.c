#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)21;
unsigned int var_7 = 533255973U;
int zero = 0;
long long int var_12 = 5896303908650422018LL;
short var_13 = (short)16212;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
