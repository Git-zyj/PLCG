#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63314;
short var_6 = (short)14555;
unsigned int var_7 = 582611880U;
unsigned int var_8 = 287613231U;
long long int var_9 = -537271835484101238LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)65;
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
