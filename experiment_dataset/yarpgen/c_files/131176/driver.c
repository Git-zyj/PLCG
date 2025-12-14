#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 531777971U;
int var_2 = 2077005329;
short var_4 = (short)25409;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)96;
int zero = 0;
long long int var_12 = -7063794127261075707LL;
short var_13 = (short)7461;
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
