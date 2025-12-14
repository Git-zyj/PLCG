#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7685800944070032819ULL;
long long int var_3 = -5098445923128872676LL;
unsigned int var_4 = 2015086860U;
unsigned short var_9 = (unsigned short)3720;
short var_10 = (short)-11449;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 27986810;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
