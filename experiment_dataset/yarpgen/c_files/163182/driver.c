#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2061147492082301238LL;
int var_6 = -1984709991;
_Bool var_7 = (_Bool)1;
int var_9 = -1375598428;
int zero = 0;
int var_14 = 1456441048;
signed char var_15 = (signed char)-18;
unsigned char var_16 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
