#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1783331867U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 4019854628U;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)100;
_Bool var_19 = (_Bool)1;
long long int var_20 = 5453616133185239260LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
