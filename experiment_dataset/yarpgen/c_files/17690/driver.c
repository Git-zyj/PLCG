#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13374;
int var_2 = 1331587839;
unsigned long long int var_4 = 9934848783452593119ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-28769;
long long int var_15 = -4135176203415976770LL;
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
