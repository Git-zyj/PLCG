#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-35;
int var_3 = -208125149;
long long int var_6 = -827711884361137980LL;
unsigned short var_8 = (unsigned short)35331;
int zero = 0;
unsigned int var_10 = 2660833848U;
long long int var_11 = -1686285328316833544LL;
unsigned char var_12 = (unsigned char)96;
int var_13 = -954408258;
unsigned short var_14 = (unsigned short)57017;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
