#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3140724809361932251LL;
signed char var_2 = (signed char)74;
unsigned short var_3 = (unsigned short)39228;
_Bool var_5 = (_Bool)0;
int var_6 = -375369560;
_Bool var_8 = (_Bool)1;
int var_9 = -136767789;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)20489;
int var_12 = 1807979662;
unsigned int var_13 = 1250905631U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
