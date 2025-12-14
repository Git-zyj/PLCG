#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1265903605U;
short var_8 = (short)-3149;
long long int var_9 = -8555113437144181922LL;
int zero = 0;
long long int var_13 = -2842392973962544775LL;
long long int var_14 = 5490771930974985048LL;
int var_15 = 774524702;
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
