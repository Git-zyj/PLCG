#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1190722111452669783LL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)26512;
unsigned short var_14 = (unsigned short)20045;
int zero = 0;
long long int var_19 = 3277182520108448950LL;
unsigned long long int var_20 = 1731394078740613186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
