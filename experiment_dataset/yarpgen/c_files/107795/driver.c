#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1081900709;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 706063465U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_13 = 10247474853414914544ULL;
int zero = 0;
short var_15 = (short)-4763;
unsigned long long int var_16 = 5170235642917616305ULL;
void init() {
}

void checksum() {
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
