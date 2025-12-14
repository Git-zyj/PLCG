#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11591;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 2313695904437667770ULL;
int zero = 0;
long long int var_14 = -77471951716587902LL;
unsigned int var_15 = 1242286200U;
void init() {
}

void checksum() {
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
