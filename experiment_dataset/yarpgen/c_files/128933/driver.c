#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3461;
_Bool var_3 = (_Bool)1;
int var_6 = 305885758;
unsigned int var_7 = 3045718087U;
int zero = 0;
unsigned long long int var_10 = 16179037749074917621ULL;
unsigned short var_11 = (unsigned short)26739;
unsigned long long int var_12 = 5251058364087666136ULL;
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
