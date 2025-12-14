#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)14;
long long int var_9 = 8791007274737664884LL;
int var_11 = 297150649;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 3176551545457502365ULL;
short var_16 = (short)21208;
unsigned char var_17 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
