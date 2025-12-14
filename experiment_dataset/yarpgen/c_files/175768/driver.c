#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
short var_2 = (short)24882;
signed char var_5 = (signed char)-115;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 5071944878432432157LL;
long long int var_15 = 8024397038920936817LL;
void init() {
}

void checksum() {
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
