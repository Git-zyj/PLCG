#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4302035610192342280LL;
unsigned int var_6 = 2511909152U;
long long int var_8 = -3465388880467866460LL;
int zero = 0;
long long int var_10 = 4948980134065853535LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)19291;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
