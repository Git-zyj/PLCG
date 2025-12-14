#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 228678784U;
_Bool var_1 = (_Bool)0;
long long int var_3 = -3959307390481325516LL;
unsigned long long int var_9 = 8725983429622172895ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)20059;
unsigned int var_15 = 274932938U;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6365003620464630344LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
