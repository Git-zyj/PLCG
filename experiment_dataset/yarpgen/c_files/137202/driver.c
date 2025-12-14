#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -26975534224045698LL;
unsigned int var_3 = 3912338940U;
unsigned char var_4 = (unsigned char)241;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 1438576152;
unsigned int var_13 = 6916840U;
unsigned int var_14 = 1551606746U;
unsigned short var_15 = (unsigned short)57171;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
